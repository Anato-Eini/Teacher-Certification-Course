#ifndef TEACHER_CERTIFICATION_COURSE_NODE_H
#define TEACHER_CERTIFICATION_COURSE_NODE_H


class Node {
public:
    char value;
    Node* next;
    Node(char value, Node* next) : value(value), next(next) {}
};


#endif //TEACHER_CERTIFICATION_COURSE_NODE_H
