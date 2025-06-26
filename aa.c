#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the doubly linked list
struct Node {
    int data;
    struct Node* next;

    struct Node* prev;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Function to insert a node at the front of the deque
void insertFront(struct Node** head_ref, int data) {
    struct Node* newNode = createNode(data);
    if (*head_ref == NULL) {
        *head_ref = newNode;
    } else {
        newNode->next = *head_ref;
        (*head_ref)->prev = newNode;
        *head_ref = newNode;
    }
}

// Function to insert a node at the rear of the deque
void insertRear(struct Node** head_ref, int data) {
    struct Node* newNode = createNode(data);
    if (*head_ref == NULL) {
        *head_ref = newNode;
    } else {
        struct Node* temp = *head_ref;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

// Function to delete a node from the front of the deque
void deleteFront(struct Node** head_ref) {
    if (*head_ref == NULL) {
        printf("Deque is empty.\n");
    } else {
        struct Node* temp = *head_ref;
        *head_ref = (*head_ref)->next;
        if (*head_ref != NULL) {
            (*head_ref)->prev = NULL;
        }
        free(temp);
    }
}

// Function to delete a node from the rear of the deque
void deleteRear(struct Node** head_ref) {
    if (*head_ref == NULL) {
        printf("Deque is empty.\n");
    } else {
        struct Node* temp = *head_ref;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        if (temp->prev != NULL) {
            temp->prev->next = NULL;
        } else {
            *head_ref = NULL;
        }
        free(temp);
    }
}

// Function to display the elements of the deque
void displayDeque(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function
int main() {
    struct Node* deque = NULL;

    // Insert elements at the front of the deque
    insertFront(&deque, 10);
    insertFront(&deque, 20);
    insertFront(&deque, 30);

    // Display the deque
    printf("Deque after inserting at front: ");
    displayDeque(deque);

    // Insert elements at the rear of the deque
    insertRear(&deque, 40);
    insertRear(&deque, 50);

    // Display the deque
    printf("Deque after inserting at rear: ");
    displayDeque(deque);

    // Delete elements from the front of the deque
    deleteFront(&deque);
    deleteFront(&deque);

    // Display the deque
    printf("Deque after deleting from front: ");
    displayDeque(deque);

    // Delete elements from the rear of the deque
    deleteRear(&deque);

    // Display the deque
    printf("Deque after deleting from rear: ");
    displayDeque(deque);

    return 0;
}

