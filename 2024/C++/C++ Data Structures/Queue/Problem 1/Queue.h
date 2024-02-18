#ifndef TEACHER_CERTIFICATION_COURSE_QUEUE_H
#define TEACHER_CERTIFICATION_COURSE_QUEUE_H

#include "Node.h"
class Queue {
    Node*  dequeuer, *enqueuer;
public:
    Queue() : dequeuer(nullptr), enqueuer(nullptr){}
    void enqueue(int);
    int dequeue();
};


#endif //TEACHER_CERTIFICATION_COURSE_QUEUE_H
