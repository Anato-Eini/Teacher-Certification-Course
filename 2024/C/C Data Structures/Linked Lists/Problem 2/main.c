// Do not modify code in this file. Go to linkedList.c

#include <stdio.h>
#include "linkedlist.h"

int main() {
    struct LinkedList linkedList;
    linkedList.head = NULL;

    printf("Enter the initial size of the linked list: ");
    int initialSize;
    scanf("%d", &initialSize);

    for (int i = 0; i < initialSize; i++) {
        printf("Enter element %d: ", i + 1);
        int value;
        scanf("%d", &value);
        insertAtTail(&linkedList, value);
    }

    printf("\nLinked List before head insertion:\n");
    displayLinkedList(&linkedList);

    printf("\nEnter the number of elements to insert at the front: ");
    int numElements;
    scanf("%d", &numElements);

    for (int i = 0; i < numElements; i++) {
        printf("Enter the value of element %d: ", i + 1);
        int value;
        scanf("%d", &value);
        insertAtFront(&linkedList, value);
    }

    printf("\nLinked List after head insertion:\n");
    displayLinkedList(&linkedList);

    return 0;
}