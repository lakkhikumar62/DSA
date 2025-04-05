#include <stdio.h>
#define MAX 100 // Define the maximum size of the stack

int stack[MAX]; // Array to store stack elements
int top = -1;   // Initialize stack top to -1

// Function to push an element into the stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack overflow! Unable to push %d.\n", value);
    } else {
        stack[++top] = value;
        printf("%d pushed into the stack.\n", value);
    }
}

// Function to pop an element from the stack
void pop() {
    if (top == -1) {
        printf("Stack underflow! The stack is empty.\n");
    } else {
        printf("%d popped from the stack.\n", stack[top--]);
    }
}

// Function to display elements of the stack
void display() {
    if (top == -1) {
        printf("The stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}