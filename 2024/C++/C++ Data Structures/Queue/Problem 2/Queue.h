#ifndef TEACHER_CERTIFICATION_COURSE_QUEUE_H
#define TEACHER_CERTIFICATION_COURSE_QUEUE_H

#include "Node.h"
class Queue {
    Node* head, *tail;
    int size;
public:
    Queue(): size(0), head(new Node{0, nullptr}), tail(new Node{0, nullptr}) {}
    [[nodiscard]] bool isEmpty() const;
    [[nodiscard]] int getSize() const;
    void enqueue(int);
    int dequeue();
};


#endif //TEACHER_CERTIFICATION_COURSE_QUEUE_H
