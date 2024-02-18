#include "Queue.h"

void Queue::enqueue() {
    if(!head->next)
        head->next = tail->next = new Node{++totalCustomers, nullptr};
    else
        tail->next = tail->next->next = new Node{++totalCustomers, nullptr};
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

int Queue::getSize() const {
    return size;
}

void Queue::print() const {
    if(head->next){
        Node *curr = head->next;
        cout << "Current waitlist:\n";
        while (curr) {
            cout << "Customer " << curr->value << '\n';
            curr = curr->next;
        }
    }else cout << "The waitlist is empty.\n";
}