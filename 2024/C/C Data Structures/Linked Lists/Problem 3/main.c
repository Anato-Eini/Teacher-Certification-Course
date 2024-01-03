#include <stdio.h>
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
    struct Node* head = NULL;
    int size;

    printf("Enter the size of the linked list: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        int value;
        printf("Enter the value of element %d: ", (i + 1));
        scanf("%d", &value);
        head = insert(head, value);
    }

    printf("\nLinked List before reversing: ");
    displayLinkedList(head);

    head = reverse(head);

    printf("Linked List after reversing: ");
    displayLinkedList(head);

    return 0;
}