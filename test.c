#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

void push() {
    int element;
    printf("Enter the element to push: ");
    scanf("%d", &element);

    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = element;
    new_node->next = top;
    top = new_node;
}

void pop() {
    if (top == NULL) {
        printf("Stack is empty!\n");
        return;
    }

    struct node *temp = top;
    top = top->next;
    free(temp);
}

void peek() {
    if (top == NULL) {
        printf("Stack is empty!\n");
        return;
    }

    printf("The top element of the stack is: %d\n", top->data);
}

void display() {
    if (top == NULL) {
        printf("Stack is empty!\n");
        return;
    }

    struct node *ptr = top;
    printf("The elements of the stack are: ");
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main() {
    int choice;
    printf("\n**Stack operations using linked list**\n");
    printf("\n1. Push");
    printf("\n2. Pop");
    printf("\n3. Peek");
    printf("\n4. Display");
    printf("\n5. Exit");

    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}