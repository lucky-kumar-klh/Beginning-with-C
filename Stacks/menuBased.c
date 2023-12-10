#include <stdio.h>
#include <stdbool.h>

int top = -1, bottom = -1;
int arr[50];

void push(){
  int data;
  printf("Enter data to push : ");
  scanf("%d", &data);
  if (top == -1){  // empty stack
    top = bottom = 0;
    arr[top] = data;
  }
  else {  // existing stack
    top++;
    arr[top] = data;
  }
  printf("%d pushed to Stack\n", data);
}

void pop(){
  int data;
  if (top == -1){  // empty stack
    printf("Empty Stack\n");
  }
  else { // existing Stack
    printf("Enter data to be poped : ");
    scanf("%d", &data);
    printf("%d poped successfully !\n", data);
    top--;
  }
}

void display(){
  if (top == -1){  // empty stack
    printf("Nothing to display!\n");
  }
  else { 
    printf("Your Stack = ");
    for (int i = top; i >= bottom; i--){
      printf("%d ", arr[i]);
    }
  }
}

void showMenu(int *n){
  printf("1. Push\n2. Pop\n3. Exit\nChoose any one : ");
  scanf("%d", n);
}

int main(){

  int n;
  bool run = true;
  printf("1. Push\n2. Pop\n3. Exit\nChoose any one : ");
  scanf("%d", &n);

  while ( run ){

    switch (n){
      case 1:
        push();
        showMenu(&n);
        break;
      case 2:
        pop();
        showMenu(&n);
        break;
      case 3:
        display();
        run = false;
        break;
      default:
        printf("Invalid Choice");
        showMenu(&n);
        break;
    }

  }
  return 0;
}