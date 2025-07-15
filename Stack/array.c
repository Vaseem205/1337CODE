#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Define the stack struct
typedef struct {
    int arr[MAX];   // Array to hold stack elements
    int top;        // Index of the top element
} Stack;

// Function to initialize the stack
void initStack(Stack *s) {
    s->top = -1;
}

// Push operation
void push(Stack *s, int value) {
    if (s->top == MAX - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    s->arr[++(s->top)] = value;
}

// Pop operation
int pop(Stack *s) {
    if (s->top == -1) {
        printf("Stack Underflow!\n");
        return -1; // return -1 as error code
    }
    return s->arr[(s->top)--];
}

// Example usage
int main() {
    Stack s;
    initStack(&s);

    push(&s, 10);
    push(&s, 20);

    printf("Popped: %d\n", pop(&s)); // 20
    printf("Popped: %d\n", pop(&s)); // 10
    printf("Popped: %d\n", pop(&s)); // Should show underflow

    return 0;
}
