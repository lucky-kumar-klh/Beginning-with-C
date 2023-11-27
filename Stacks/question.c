// Create Stack of Size 4, perform the following operations and the 
// outcome of each operation 1.push1 2.push2 3.  
#include <stdio.h>
#define n 4;
// OR
const k = 4;
int arr[n];
int top = -1;
void display (){
  for (int i = top; i >= 0; i--)
    printf("%d\n", arr[i]);
}
int peep (){
  if ( top == -1 ){
    printf("Stack-Underflow");
    return -1;
  }
  else 
    return arr[top];
} 
void push ( int d ){
  if ( top == n-1 )
    printf("Stack-Overflow");
  else {
    top++;
    arr[top] = d;
  }
} 
int pop (){
  if ( top == -1 ){
    printf("Stack-Underflow");
    return -1;
  }
  else 
    top--;
}
int main(){
  int arr[];
  int k;

  return 0;
}