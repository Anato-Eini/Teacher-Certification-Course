// Do not modify code in this file. Go to linkedList.c
struct Node {
    int data;
    struct Node* next;
};

struct LinkedList {
    struct Node* head;
};

struct Node* createNode(int value);
void insertAtFront(struct LinkedList* list, int value);
void insertAtTail(struct LinkedList* list, int value);
void displayLinkedList(struct LinkedList* list);