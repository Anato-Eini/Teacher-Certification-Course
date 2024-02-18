#include "Queue.h"


void Queue::enqueue(int num) {
    if(!tail->next)
        head->next = tail->next = new Node{num, nullptr};
    else
        tail->next = tail->next->next = new Node{num, tail->next};
    size++;
}

int Queue::dequeue() {
    int value = head->next->value;
    Node* toBeDeleted = head->next;
    head->next = head->next->next;
    delete toBeDeleted;
    size--;
    return value;
}

bool Queue::isEmpty() const {
    return size == 0;
}

int Queue::getSize() const {
    return size;
}
