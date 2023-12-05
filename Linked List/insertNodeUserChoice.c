#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node *link;
};
struct Node *head = NULL;  // initially No address asigned
void insertData(){
  struct Node *temp, *new;
  int choice, value;
  printf("Press 1 to add data, 0 to stop : ");
  scanf("%d", &choice);
  while (choice != 0){  // user choice to add data
    // if choice == 1 : allocate memory
    new = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data : ");
    scanf("%d", &value);
    new -> data = value;
    new -> link = NULL;
    // check of which type of list we need to link the data
    if (head == NULL){  // empty list
      head = new;  // assign new address to head -> head now points to latest node
    }
    else {  // existing list
      temp = head;  // temp has address of first node
      while (temp -> link != NULL){  // move temp to second last node
        temp = temp -> link;
      }
      temp -> link = new;
    }
    printf("Press 1 to add data, 0 to stop : ");
    scanf("%d", &choice);
  }
}
int main(){
  insertData();
  return 0;
}