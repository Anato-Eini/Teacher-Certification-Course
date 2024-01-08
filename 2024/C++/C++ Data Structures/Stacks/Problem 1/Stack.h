#ifndef TEACHER_CERTIFICATION_COURSE_STACK_H
#define TEACHER_CERTIFICATION_COURSE_STACK_H

#include "Node.h"
#include <iostream>
class Stack {
    Node* head;
public:
    Stack() : head(new Node('0', nullptr)) {}
    void push(char character);
    [[nodiscard]] char pop();
    [[nodiscard]] char peek() ;
    [[nodiscard]] bool isEmpty() ;
};


#endif //TEACHER_CERTIFICATION_COURSE_STACK_H
