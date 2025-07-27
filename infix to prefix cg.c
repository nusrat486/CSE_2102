#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 100

// Stack structure
char stack[MAX];
int top = -1;

// Function to push to stack
void push(char c) {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = c;
}

// Function to pop from stack
char pop() {
    if (top == -1) {
        return -1;
    }
    return stack[top--];
}

// Function to return precedence of operators
int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

// Function to check if character is operator
int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Function to reverse the string and change brackets
void reverse(char *exp) {
    int len = strlen(exp);
    for (int i = 0; i < len / 2; i++) {
        char temp = exp[i];
        exp[i] = exp[len - i - 1];
        exp[len - i - 1] = temp;
    }

    // Swap brackets
    for (int i = 0; i < len; i++) {
        if (exp[i] == '(')
            exp[i] = ')';
        else if (exp[i] == ')')
            exp[i] = '(';
    }
}

// Convert infix to postfix (helper function)
void infixToPostfix(char* infix, char* postfix) {
    int i, k = 0;
    char c;

    for (i = 0; infix[i] != '\0'; i++) {
        c = infix[i];

        // Operand
        if (isalnum(c)) {
            postfix[k++] = c;
        }
        // Left parenthesis
        else if (c == '(') {
            push(c);
        }
        // Right parenthesis
        else if (c == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix[k++] = pop();
            }
            pop(); // Pop '('
        }
        // Operator
        else if (isOperator(c)) {
            while (top != -1 && precedence(stack[top]) >= precedence(c)) {
                postfix[k++] = pop();
            }
            push(c);
        }
    }

    while (top != -1) {
        postfix[k++] = pop();
    }

    postfix[k] = '\0';
}

// Main conversion function
void infixToPrefix(char* infix, char* prefix) {
    char reversedInfix[MAX], postfix[MAX];

    strcpy(reversedInfix, infix);
    reverse(reversedInfix);

    infixToPostfix(reversedInfix, postfix);
    reverse(postfix);
    strcpy(prefix, postfix);
}

// Main function
int main() {
    char infix[MAX], prefix[MAX];

    printf("Enter infix expression: ");
    scanf("%s", infix);

    infixToPrefix(infix, prefix);

    printf("Prefix expression: %s\n", prefix);

    return 0;
}

