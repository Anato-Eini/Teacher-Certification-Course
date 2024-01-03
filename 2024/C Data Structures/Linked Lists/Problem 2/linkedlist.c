#include "linkedList.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct Node Node;
void insertAtFront(struct LinkedList* list, int value) {
    // Implement me!
    Node* newNode = malloc(1 * sizeof(Node));
    newNode->data = value;
    newNode->next = list->head;
    list->head = newNode;
}


// ----- DO NOT MODIFY CODE BELOW -----
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertAtTail(struct LinkedList* list, int value) {
    struct Node* newNode = createNode(value);
    if (list->head == NULL) {
        list->head = newNode;
    }
    else {
        struct Node* tail = list->head;
        while (tail->next != NULL) {
            tail = tail->next;
        }
        tail->next = newNode;
    }
}

void displayLinkedList(struct LinkedList* list) {
    struct Node* currentNode = list->head;
    while (currentNode != NULL) {
        if (currentNode->next != NULL) {
            printf("%d -> ", currentNode->data);
        }
        else {
            printf("%d", currentNode->data);
        }
        currentNode = currentNode->next;
    }
    printf("\n");
}