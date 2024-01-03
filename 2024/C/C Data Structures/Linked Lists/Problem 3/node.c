#include "node.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;
struct Node* reverse(struct Node* head) {
    // Implement me!
    Node* next;
    Node* curr = next = head, *prev = NULL;
    while(next){
        next = next->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}

struct Node* createNode(int value) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = value;
    node->next = NULL;
    return node;
}

struct Node* insert(struct Node* head, int value) {
    struct Node* newNode = createNode(value);
    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* currentNode = head;
        while (currentNode->next != NULL) {
            currentNode = currentNode->next;
        }
        currentNode->next = newNode;
    }
    return head;
}