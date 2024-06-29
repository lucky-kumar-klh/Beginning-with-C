#include <ctype.h>
#include <stdio.h>
char stack[20];
int top = -1;

void push(char input) {
  top++;
  stack[top] = input;
}

char pop() { return stack[top--]; }

int priority(char c) {
  if (c == '(') {
    return 0;
  }
  if (c == '+' || c == '-') {
    return 1;
  }
  if (c == '*' || c == '/') {
    return 2;
  }
  if (c == '^') {
    return 3;
  }
}

int main() {
  char exp[20], x;
  printf("Enter the infix expression:\n");
  scanf("%s", exp);
  for (int i = 0; exp[i] != '\0'; i++) {
    if (isalpha(exp[i])) {
      printf("%c", exp[i]);
    } else if (exp[i] == '(') {
      push(exp[i]);
    } else if (exp[i] == ')') {
      while ((x = pop()) != '(') {
        printf("%c", x);
      }
    } else {
      while (priority(stack[top]) >= priority(exp[i])) {
        printf("%c", pop());
      }
      push(exp[i]);
    }
  }
  while (top != -1) {
    printf("%c", pop());
  }
}
