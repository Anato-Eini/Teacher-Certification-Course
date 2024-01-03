// Do not modify code in this file. Go to node.c
#ifndef NODE_H
#define NODE_H

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int value);
struct Node* deleteNode(struct Node* head, int value);

#endif