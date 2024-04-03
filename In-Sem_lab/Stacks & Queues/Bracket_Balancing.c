#include <stdio.h>
#include <string.h>
#define MAX 50

char stack[MAX];
int top = -1;

void push(char ch) {
  printf("Pushed %c!\n", ch);
  stack[++top] = ch;
}

char pop() {
  printf("Popped %c!\n", stack[top]);
  return stack[top--];
}

int main() {

  char exp[MAX];
  printf("Enter Expression: ");
  scanf("%s", exp);

  int matching = 1;

  for (int i = 0; i < strlen(exp); i++) {
    if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
      push(exp[i]);
    } else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
      if (top == -1) {
        matching = 0;
        printf("Empty Stack");
        break;
      }
      switch (exp[i]) {
      case ')':
        if (stack[top] == '(')
          pop();
        else
          matching = 0;
        break;
      case '}':
        if (stack[top] == '{')
          pop();
        else
          matching = 0;
        break;
      case ']':
        if (stack[top] == '[')
          pop();
        else
          matching = 0;
        break;
      }
    }
  }
  if (top != -1)
    matching = 0;

  if (matching)
    printf("Correct!\n");
  else
    printf("Incorrect\n");

  return 0;
}
