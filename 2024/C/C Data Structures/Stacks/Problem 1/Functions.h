#ifndef TEACHER_CERTIFICATION_COURSE_FUNCTIONS_H
#define TEACHER_CERTIFICATION_COURSE_FUNCTIONS_H
#include "Node.h"
#include <stdbool.h>
#include <stdlib.h>
void push(Node *head, char value){
    Node* newNode = (Node*)malloc(1 * sizeof (Node));
    newNode->value = value;
    newNode->next = head->next;
    head->next = newNode;
}

char peek(Node* head){
    return head->next->value;
}

char pop(Node* head){
    Node* toBeDeleted = head->next;
    char returner = toBeDeleted->value;
    head->next = head->next->next;
    free(toBeDeleted);
    toBeDeleted = NULL;
    return returner;
}
bool isEmpty(Node* head){
    return !head->next;
}

#endif //TEACHER_CERTIFICATION_COURSE_FUNCTIONS_H
