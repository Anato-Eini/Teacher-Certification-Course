#include "Queue.h"

void Queue::enqueue(int value) {
    if(!enqueuer)
        dequeuer = enqueuer = new Node{value, nullptr};
    else {
        enqueuer->next = new Node{value, nullptr};
        enqueuer = enqueuer->next;
    }
}

int Queue::dequeue() {
    int value = dequeuer->element;
    Node* deleter = dequeuer;
    dequeuer = dequeuer->next;
    delete deleter;
    return value;
}