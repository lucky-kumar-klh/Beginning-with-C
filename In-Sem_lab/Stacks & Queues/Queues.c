#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* rear = NULL;
struct Node* front = NULL;

int choice;
void accept() {
    printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nYour Choice: ");
    scanf("%d", &choice);
}

void enqueue() {
    int val;
    printf("Enter Data to Enqueue: ");
    scanf("%d", &val);
    struct Node* newNode = malloc(sizeof(struct Node*));
    newNode -> data = val;
    newNode -> next = NULL;
    if (!rear) {
        rear = front = newNode;
    } else {
        rear -> next = newNode;
        rear = newNode;
    }
    printf("%d Enqueued\n", val);
}

void dequeue() {
    if (!rear) {
        printf("Empty Queue\n");
        return;
    } else if (rear == front) {
        printf("%d Dequeued\n", rear->data);
        free(rear);
        rear = front = NULL;
        return;
    }
    struct Node* del = front;
    front = front -> next;
    printf("%d Dequeued\n", del->data);
    free(del);
}

void display() {
    if (!rear) {
        printf("Empty Queue\n");
        return;
    }
    printf("Rear: %d\nFront: %d\n", rear->data, front->data);
}

int main(){

    while (1) {
        accept();
        switch (choice) {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Thank You\n");
            return 0;
        default:
            printf("Invalid Choice\n");
        }
    }

}