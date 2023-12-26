// *** STACK ***
#include <stdio.h>
#define n 20
int top = -1; 
int arr[n];
int choice;

void push(){
  printf("\nPush Done !\n");
}

void pop(){
  printf("\nElement Popped !\n");
}

void peep(){
  printf("\nPeeped !\n");
}

void display(){
  printf("\nDisplayed Successfully\n");
}

void accept(){
  printf("\n1. Push\n2. Pop\n3. Peep\n4. Display\n5. Exit\nEnter Choice : ");
  scanf("%d", &choice);
}

int main(){

  int run = 1;
  accept();
  
  while (run) {

    switch (choice){
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      case 3:
        peep();
        break;
      case 4:
        display();
        break;
      case 5:
        printf("Thank you for your time");
        return 0;
      default:
        printf("\nInvalid Choice! Try again\n");
        break;
    }
    accept();
  }
}