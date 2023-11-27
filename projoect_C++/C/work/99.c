#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

struct Stack {
    char data[MAX_SIZE];
    int top;
};

void initialize(struct Stack* stack) {
    stack->top = -1;
}

bool isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

bool isFull(struct Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(struct Stack* stack, char value) {
    if (!isFull(stack)) {
        stack->data[++stack->top] = value;
    }
}

char pop(struct Stack* stack) {
    if (!isEmpty(stack)) {
        return stack->data[stack->top--];
    }
    return '\0';
}

bool isMatching(char left, char right) {
    return (left == '(' && right == ')') ||
           (left == '{' && right == '}') ||
           (left == '[' && right == ']');
}

bool isBalanced(char* str) {
    struct Stack stack;
    initialize(&stack);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            push(&stack, str[i]);
        } else if (str[i] == ')' || str[i] == '}' || str[i] == ']') {
            if (isEmpty(&stack) || !isMatching(pop(&stack), str[i])) {
                return false;
            }
        }
    }

    return isEmpty(&stack);
}

int main() {
    char str[MAX_SIZE];
    scanf("%s", str);

    if (isBalanced(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
