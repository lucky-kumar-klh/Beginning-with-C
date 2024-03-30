#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* top = NULL;

int choice;
void accept() {
    printf("1. Push\n2. Pop\n3. Peek\n4. Peep\n5. Exit\nYour Choice: ");
    scanf("%d", &choice);
}

void push() {

    int val;
    printf("Enter Data to Push: ");
    scanf("%d", &val);
    struct Node* newNode = malloc(sizeof(struct Node*));
    newNode -> data = val;
    newNode -> next = NULL;
    if (!top) {
        top = newNode;
    } else {
        newNode -> next = top;
        top = newNode;
    }
    printf("%d Pushed !\n", val);
}

void pop() {
    
    if (!top) {
        printf("Empty Stack!\n");
        return;
    }
    struct Node* del = top;
    top = top -> next;
    printf("%d Popped !\n", del -> data);
    free(del);
}

void peek() {
    
    if (!top) {
        printf("Empty Stack !\n");
        return;
    }
    int val, found = 0;
    printf("Enter data to Peek: ");
    scanf("%d", &val);
    struct Node* temp = top;
    while (temp != NULL) {
        if (val == temp->data){
            found = 1;
            break;
        }
        temp = temp -> next;
    }
    if (found) printf("%d is Present in Stack\n", val);
    else printf("%d NOT Found\n", val);
}

void peep() {

    if (!top) {
        printf("Empty Stack!\n");
        return;
    }
    printf("%d is at Top\n", top->data);
}



int main(){

    while(1) {
        accept();
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                peep();
                break;
            case 5:
                printf("Thank You\n");
                return 0;
            default:
                printf("Invalid Choice");
        }
    }
    
}