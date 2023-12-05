#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node *link;
};

void insertData(struct Node **head, int value){
  struct Node *new, *temp;
  // allocate new node address
  new = (struct Node *)malloc(sizeof(struct Node)); 
  // assign value to this new node
  new -> data = value;
  // since this is the last created node, it's link part has NULL
  new -> link = NULL;
  // check to which list this new node will get linked with 
  if (*head == NULL){  // empty list
    // store created node's address in head
    *head = new;
  }
  else { // existing list 
    // use any temp struct to point to first node
    temp = *head;
    while (temp -> link != NULL){ // move temp to second last node to link to the last node
      temp = temp -> link;
    }
    // assign last node's address to temp -> link
    temp -> link = new;
  }
}
int main(){
  struct Node *head = NULL;
  //insertData(&head, 25);
  return 0;
}
