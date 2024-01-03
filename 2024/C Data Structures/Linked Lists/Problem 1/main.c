// Do not modify code in this file. Go to node.c

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void displayLinkedList(struct Node* head) {
    struct Node* currentNode = head;
    while (currentNode != NULL) {
        if (currentNode->next != NULL) {
            printf("%d -> ", currentNode->data);
        } else {
            printf("%d\n", currentNode->data);
        }
        currentNode = currentNode->next;
    }
}

int main() {
    // Prompt the user for the number of elements in the linked list
    printf("Enter the number of elements in the linked list: ");
    int numElements;
    scanf("%d", &numElements);

    // Create the nodes
    struct Node* head = NULL;
    struct Node* prevNode = NULL;
    for (int i = 0; i < numElements; i++) {
        printf("Enter the value of node %d: ", i + 1);
        int value;
        scanf("%d", &value);
        struct Node* node = createNode(value);
        if (head == NULL) {
            head = node;
        } else {
            prevNode->next = node;
        }
        prevNode = node;
    }

    // Display the initial linked list
    printf("Linked List: ");
    displayLinkedList(head);

    // Prompt the user for the value to delete
    printf("Enter the value to delete: ");
    int valueToDelete;
    scanf("%d", &valueToDelete);

    // Delete all occurrences of the specified value from the linked list
    head = deleteNode(head, valueToDelete);

    // Display the updated linked list
    printf("Updated Linked List: ");
    displayLinkedList(head);

    return 0;
}