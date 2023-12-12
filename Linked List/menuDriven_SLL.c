#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node{
  int data;
  struct Node *link;
};
struct Node *head = NULL;  // initial head

void createNode(){
  struct Node *new, *temp;
  bool choice;
  int value;
  printf("Press 1 to create, 0 to Exit : ");
  scanf("%d", &choice);
  while (choice != 0){
    new = (struct Node *)malloc(sizeof(struct Node));  // allocate memory
    printf("Enter data : ");
    scanf("%d", &value);
    new -> data = value;
    new -> link = NULL;  // last node will have NULL in its link part
    // now we need to link this new node to previous node in order to maintain linked list
    if (head == NULL) {  // empty list
      head = new;
    }
    else {
      temp = head;
      while (temp -> link != NULL)
        temp = temp -> link;
      temp -> link = new;
    }
    printf("Press 1 to create, 0 to Exit : ");
    scanf("%d", &choice);
  }
}

void deleteNode(){

}

void dispaly(){
  if (head == NULL){
    printf("Empty List !\n\n");
  }
  struct Node *temp = head;
  printf("\nYour data : ");
  while (temp != NULL){
    temp = temp -> link;
    printf("%d ", temp -> data);
  }
  printf("\n\n");
}

void showMenu(int *t){
  printf("1. Create\n2. Delete\n3. Exit\nChoose one : ");
  scanf("%d", t);
}

int main(){
  int t;
  bool run = true;
  printf("1. Create\n2. Delete\n3. Exit\nChoose one : ");
  scanf("%d", &t);
  while (run){

    switch (t){
      case 1:
        createNode();
        showMenu(&t);
        break;
      case 2:
        deleteNode();
        showMenu(&t);
        break;
      case 3:
        dispaly();
        run = false;
        break;
      default:
        printf("Invalid Choice !\n\n");
        break;
    }
  }
  return 0;
}