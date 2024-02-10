#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* head = NULL;
Node* prev;

void insertNode() {
    int d;
    printf("Enter data: ");
    scanf("%d", &d);
    Node* newNode = (Node*)malloc(sizeof(Node));

    newNode -> data = d;
    newNode -> next = NULL;

    if (head == NULL) {   // 1st Node
        head = newNode;
        prev = head;
    }
    else {   // Normal Node
        prev -> next = newNode;
        prev = newNode;
    }
}

void deleteAtBegin() {
    Node* delete = head;
    head = head -> next;
    free (delete);
}

void printList() {
    if (head == NULL) {
        printf("\nEmpty List!\n\n");
        return;
    }
    printf("\nList: ");
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp -> next;
    }
    printf("\n");
}

int main(){

    printList();
    insertNode();
    insertNode();
    insertNode();
    printList();

    deleteAtBegin();

    printList();

    printf("\nPrev Node: %d", prev->data);
    printf("\nHead Node: %d", head->data);
    return 0;
}