#ifndef TEACHER_CERTIFICATION_COURSE_PRIORITYQUEUE_H
#define TEACHER_CERTIFICATION_COURSE_PRIORITYQUEUE_H

#include <vector>
#include <iostream>
using namespace std;
class PriorityQueue {
    vector<pair<int, int>> arr; // priority-element
    void heapify(int, int);
public:
    PriorityQueue() = default;
    [[nodiscard]] bool isPresent(int);
    void enqueue(pair<int, int>&);
    pair<int, int> dequeue();
    void print();

};


#endif //TEACHER_CERTIFICATION_COURSE_PRIORITYQUEUE_H
