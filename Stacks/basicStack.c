#include <stdio.h>

int top = -1, n = 5;
int arr[5] = {1,2,3,4,5};
// push function to insert value at last of stack & no return value
void push ( int d ){
  if ( top == (n-1) )
    printf("StackOverflow");
  else {
    top++ ;
    arr[top] = d;
  }
}
// pop function to delete value and return it 
int pop ( int d ){
  if ( top == -1 ){
    printf("Empty Stack");
    return -1;
  }
  else {
    d = arr[top];
    top--;
    return d;
  }
}
// peek function is to display the top most element in stack
int peek (){
  if ( top == -1 ){   // empty Stack
    printf("Stack Underflow");
    return -1;
  }
  else    // If data present, then return the last/recent element
    return arr[top];
}
// display function to show all elements from top to bottom 
void display (){
  for (int i = top; i >= 0; i--)
    printf("%d\n", arr[i]);
}
int main(){
  
  return 0;
}