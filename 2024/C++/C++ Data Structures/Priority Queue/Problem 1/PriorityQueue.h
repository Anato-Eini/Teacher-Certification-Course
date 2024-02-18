#ifndef TEACHER_CERTIFICATION_COURSE_PRIORITYQUEUE_H
#define TEACHER_CERTIFICATION_COURSE_PRIORITYQUEUE_H

#include <vector>

using namespace std;
class PriorityQueue {
    vector<int> arr;
public:
    PriorityQueue() = default;
    void enqueue(pair<int, int>&);
    pair<int, int> dequeue();
};


#endif //TEACHER_CERTIFICATION_COURSE_PRIORITYQUEUE_H
