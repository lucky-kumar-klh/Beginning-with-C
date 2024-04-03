#include <stdio.h>
#include <stdlib.h>
#define size 10

struct node {
  int data;
  struct node *next;
};

struct node *chain[size];

void insert(int value) {
  struct node *n = malloc(sizeof(struct node));
  n->data = value;
  n->next = NULL;

  int key = value % size;

  if (chain[key] == NULL) {
    chain[key] = n;
  } else {
    struct node *temp = chain[key];
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = n;
  }
}

void print() {
  int i;
  for (i = 0; i < size; i++) {
    struct node *temp = chain[i];
    printf("chain[%d]-->", i);
    while (temp != NULL) {
      printf("%d -->", temp->data);
      temp = temp->next;
    }
    printf("NULL\n");
  }
}

int main() {
  int n, i;
  for (i = 0; i < size; i++) {
    chain[i] = NULL;
  }

  int x, ch;
  do {
    printf("enter data:");
    scanf("%d", &x);
    insert(x);
    printf("Hash table data:");
    print();
    printf("\ndo you want to insert next data press 1 to continue 0 to stop:");
    scanf("%d", &ch);
  } while (ch != 0);
}
