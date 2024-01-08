#ifndef TEACHER_CERTIFICATION_COURSE_NODE_H
#define TEACHER_CERTIFICATION_COURSE_NODE_H

#include <iostream>
#include <utility>
using namespace std;
class Node {
public:
    string value;
    Node* next;
    Node(string value, Node* next) : value(std::move(value)), next(next) {}
};


#endif //TEACHER_CERTIFICATION_COURSE_NODE_H
