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

void InsertAtBegin() {
    int d;
    printf("Enter data: ");
    scanf("%d", &d);
    Node* newNode = (Node*)malloc(sizeof(Node));

    newNode -> data = d;
    newNode -> next = head;

    head = newNode;
}

void deleteAtBegin() {
    Node* delete = head;
    head = head -> next;
    free (delete);
}

void printList(Node* x) {
    if (x == NULL) {
        printf("\nEmpty List!\n\n");
        return;
    }
    printf("\nList: ");
    Node* t = x;
    while (t != NULL) {
        printf("%d ", t->data);
        t = t -> next;
    }
    printf("\n");
}

void minimum() {
    if (head -> next == NULL){
        printf("Minimum: %d", head->data);
        return;
    }
    int min = 99999999;
    Node* temp = head;
    while (temp != NULL) {
        if (min > temp->data)
            min = temp->data;
        temp = temp -> next;
    }
    printf("Minimum: %d", min);
}

void maximum() {
    if (head -> next == NULL){
        printf("Maximum: %d", head->data);
        return;
    }
    int max = -99999999;
    Node* temp = head;
    while (temp != NULL) {
        if (max < temp->data)
            max = temp->data;
        temp = temp -> next;
    }
    printf("Maximum: %d", max);
}

void insertAtPosition(int pos) {
    if (pos == 1) {
        InsertAtBegin();
        return;
    }
    int d;
    printf("Enter data: ");
    scanf("%d", &d);
    Node* newNode = (Node*)malloc(sizeof(Node));

    newNode -> data = d;
    newNode -> next = NULL;
    int i = 2;
    Node* temp = head;
    while (i < pos) {
        i++;
        temp = temp -> next;
    }
    Node* hold = temp -> next;
    temp -> next = newNode;
    newNode -> next = hold;
}

void deleteAtPosition(int pos) {
    if (pos == 1) {
        deleteAtBegin();
        return;
    }
    int i = 2;
    Node* temp = head;
    while (i < pos) {
        i++;
        temp = temp -> next;
    }
    Node* del = temp -> next;
    temp -> next = del -> next;
    free (del);
}

Node* reverse() {
    if (head == NULL || head -> next == NULL) 
        return head;
    
    Node *current = head, *previous = NULL, *forw;

    while (forw != NULL && current != NULL) {

        forw = current -> next;
        current -> next = previous;
        previous = current;
        current = forw;
    } 
    head = previous;
    return head;
}

void bubbleSort() {
    if (head == NULL || head -> next == NULL) 
        return;

    int swapping = 1;
    Node* current = head;
    while (swapping) {
        swapping = 0;
        if (current -> next == NULL) break;
        Node* forw = current -> next;
        while (forw != NULL) {
            if (forw->data < current->data){
                int temp = forw->data;
                forw->data = current->data;
                current->data = temp;
                swapping = 1;
            }
            forw = forw -> next;
        }
        current = current -> next;
    }
}

int main(){

    printList(head);
    insertNode();
    insertNode();
    insertNode();
    // printList(head);

    // deleteAtBegin();

    // printList(head);
    // insertAtPosition(2);
    printList(head);
    // deleteAtPosition(2);
    // printList();
    // Node* temp =  reverse();
    // printList(temp);

    bubbleSort();
    printList(head);

    printf("\nPrev Node: %d", prev->data);
    printf("\nHead Node: %d", head->data);
    return 0;
}