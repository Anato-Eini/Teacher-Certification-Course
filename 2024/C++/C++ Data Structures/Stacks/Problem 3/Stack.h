#ifndef TEACHER_CERTIFICATION_COURSE_STACK_H
#define TEACHER_CERTIFICATION_COURSE_STACK_H

#include "Node.h"
class Stack {
    Node* head;
public:
    Stack() : head(new Node("", nullptr)) {}
    void push(const string&);
    [[nodiscard]] string pop();
    [[nodiscard]] string peek() ;
    [[nodiscard]] bool isEmpty() ;
};


#endif //TEACHER_CERTIFICATION_COURSE_STACK_H
