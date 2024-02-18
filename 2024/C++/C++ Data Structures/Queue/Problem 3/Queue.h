#ifndef TEACHER_CERTIFICATION_COURSE_QUEUE_H
#define TEACHER_CERTIFICATION_COURSE_QUEUE_H

#include "Node.h"
#include <vector>
#include <iostream>
using namespace std;
class Queue {
    Node* head, *tail;
    int size, totalCustomers;
public:
    Queue(): size(0), totalCustomers(0), head(new Node{0, nullptr}),
                tail(new Node{0, nullptr}) {}
    [[nodiscard]] int getSize() const;
    void print() const;
    void enqueue();
    int dequeue();
};


#endif //TEACHER_CERTIFICATION_COURSE_QUEUE_H
