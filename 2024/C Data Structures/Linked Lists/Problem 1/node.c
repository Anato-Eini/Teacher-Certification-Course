#include "node.h"
#include <stdio.h>
#include <stdlib.h>

struct Node* createNode(int value) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = value;
    node->next = NULL;
    return node;
}
typedef struct Node Node;
struct Node* deleteNode(struct Node* head, int value) {
    Node* curr = head, *prev = NULL;
    while(curr){
        if(curr->data == value){
            if(curr == head){
                curr = curr->next;
                free(head);
                head = curr;
                continue;
            }
            curr = curr->next;
            free(prev->next);
            prev->next = curr;
            continue;
        }
        prev = curr;
        curr = curr->next;
    }
    return head;
}