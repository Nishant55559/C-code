#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* first = NULL;

// Front insert
void insertFront(int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory is empty\n");
        return;
    }

    newNode->data = value;
    newNode->next = first;
    first = newNode;

    printf("Element %d inserted at the front.\n", value);
}

// Rear insert
void insertRear(int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));

    if (newNode == NULL) {
        printf("Memory is empty\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    if (first == NULL) {
        first = newNode;
    } else {
        struct node* current = first;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }

    printf("Element %d inserted at the rear.\n", value);
}

// Delete at front
void deleteFront() {
    if (first == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    struct node* temp = first;
    first = first->next;
    free(temp);
    printf("Element deleted from the front.\n");
}

// Delete at rear
void deleteRear() {
    if (first == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    if (first->next == NULL) {
        free(first);
        first = NULL;
    } else {
        struct node* current = first;
        while (current->next->next != NULL) {
            current = current->next;
        }
        free(current->next);
        current->next = NULL;
    }
    printf("Element deleted from the rear.\n");
}

// Display the linked list
void display() {
    struct node* current = first;
    if (current == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- Singly Linked List Menu ---\n");
        printf("1. Insert element at front\n");
        printf("2. Insert element at rear\n");
        printf("3. Delete element at front\n");
        printf("4. Delete element at rear\n");
        printf("5. Display linked list\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at the front: ");
                scanf("%d", &value);
                insertFront(value);
                break;
            case 2:
                printf("Enter value to insert at the rear: ");
                scanf("%d", &value);
                insertRear(value);
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                deleteRear();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
