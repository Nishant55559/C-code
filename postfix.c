#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the maximum size of the expression stack
#define MAX_SIZE 100

// Define the precedence of operators
int precedence(char operator) {
    if (operator == '+' || operator == '-')
        return 1;
    else if (operator == '*' || operator == '/')
        return 2;
    return 0; // For parentheses
}

// Check if a character is an operator
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

// Convert infix expression to postfix expression
void infixToPostfix(const char* infix, char* postfix) {
    char stack[MAX_SIZE];
    int top = -1; // Initialize the stack index
    int i, j;

    for (i = 0, j = 0; infix[i] != '\0'; i++) {
        char ch = infix[i];

        if (ch == ' ' || ch == '\t') {
            continue; // Skip whitespace
        } else if (isdigit(ch) || isalpha(ch)) {
            postfix[j++] = ch; // Output operands directly
        } else if (ch == '(') {
            stack[++top] = ch; // Push '(' onto the stack
        } else if (ch == ')') {
            // Pop operators from the stack and append them to the postfix expression
            while (top >= 0 && stack[top] != '(') {
                postfix[j++] = stack[top--];
            }
            if (top >= 0 && stack[top] == '(') {
                top--; // Pop the '(' from the stack
            }
        } else if (isOperator(ch)) {
            // Pop operators with higher or equal precedence and append to postfix
            while (top >= 0 && precedence(stack[top]) >= precedence(ch)) {
                postfix[j++] = stack[top--];
            }
            stack[++top] = ch; // Push the current operator onto the stack
        }
    }

    // Pop any remaining operators from the stack and append to postfix
    while (top >= 0) {
        postfix[j++] = stack[top--];
    }

    postfix[j] = '\0'; // Null-terminate the postfix expression
}

int main() {
    char infix[MAX_SIZE];
    char postfix[MAX_SIZE];

    printf("Enter an infix expression: ");
    gets(infix); // Note: gets() is used for simplicity; consider using fgets() for safer input handling

    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);

    return 0;
}
