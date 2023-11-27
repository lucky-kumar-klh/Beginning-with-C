#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Function to check if the given string has balanced parentheses
bool isBalancedParentheses(char inputString[]) {
    char stack[MAX_SIZE];
    int top = -1;  // Initialize stack top

    // Define a mapping for opening and closing parentheses
    char mapping[3][2] = {{')', '('}, {'}', '{'}, {']', '['}};

    // Iterate through each character in the input string
    for (int i = 0; inputString[i] != '\0'; i++) {
        // If the character is a closing parenthesis
        if (inputString[i] == mapping[0][0] || inputString[i] == mapping[1][0] || inputString[i] == mapping[2][0]) {
            // Pop the top element from the stack if it's not empty, otherwise assign a dummy value
            char topElement = (top != -1) ? stack[top--] : '#';

            // Check if the popped element matches the corresponding opening parenthesis
            if (topElement != mapping[0][1] && topElement != mapping[1][1] && topElement != mapping[2][1]) {
                return false;
            }
        } else {
            // If it's an opening parenthesis, push it onto the stack
            stack[++top] = inputString[i];
        }
    }

    // After iterating through the entire string, the stack should be empty for a balanced string
    return (top == -1);
}

int main() {
    char inputStr[] = "{}";

    if (isBalancedParentheses(inputStr)) {
        printf("The string %s has balanced parentheses.\n", inputStr);
    } else {
        printf("The string %s does not have balanced parentheses.\n", inputStr);
    }

    return 0;
}
