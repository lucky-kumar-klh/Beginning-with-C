#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node *link;
};

struct Node *Head = NULL;  // Initial Node
struct Node *newNode, *temp;   // temp node will have address of previous Node
struct Node *display;   // display Node to to traverse accross the List

void insertNode(){
  int choice, value;
  printf("1 - Insert, 0 - Exit : ");
  scanf("%d", &choice);
  while (choice){
    printf("Enter value : ");
    scanf("%d", &value);
    // node insertion
    newNode = (struct Node *)malloc(sizeof(struct Node));    // Allocate memory to which this newly created "newNode" structure will be pointing
    newNode->data = value;
    newNode->link = NULL;   // At this moment this is the last node
    // linking part
    if (Head == NULL){   // Linking as 1st Node to Head
      Head = newNode;
      temp = Head;
    }
    else {   // Linking to an existing List
      // temp = Head;  
      // while (temp->link != NULL){   //Traversing all List to go upto 2nd Last Node
      //   temp = temp->link;
      // }
      //temp->link = newNode;
      temp->link = newNode;  // Inserts the newNode to 
      temp = temp->link;   // Contains the 
    }
    printf("1 - Insert, 0 - Exit : ");
    scanf("%d", &choice);
  }
}

void displayData(){
  if (Head == NULL) printf("Empty List");
  else {
    printf("\nData : \n");
    display = Head;
    while (display != NULL){
      printf("%d ", display->data);
      display = display->link;
    }
  }
}

int main(){

  insertNode();
  displayData();

  return 0;
}