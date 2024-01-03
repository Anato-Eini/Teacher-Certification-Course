#ifndef NODE_H
#define NODE_H

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int value);
struct Node* insert(struct Node* head, int value);
struct Node* reverse(struct Node* head);

#endif