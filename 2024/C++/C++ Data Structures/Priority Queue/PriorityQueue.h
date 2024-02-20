#ifndef TEACHER_CERTIFICATION_COURSE_PRIORITYQUEUE_H
#define TEACHER_CERTIFICATION_COURSE_PRIORITYQUEUE_H

#include <vector>
#include <iostream>
using namespace std;
class PriorityQueue {
    vector<pair<int, int>> arr; // priority-element
    int size;
    void heapify(int);
    void insertionSort();
public:
    PriorityQueue(): size(0) {};
    [[nodiscard]] pair<int, int> isPresent(int);
    void enqueue(pair<int, int>);
    void swapPrioVal();
    pair<int, int> dequeue();
    void print();
    [[nodiscard]] const vector<pair<int, int>> &getArr() const;
};


#endif //TEACHER_CERTIFICATION_COURSE_PRIORITYQUEUE_H
