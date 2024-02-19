#include "PriorityQueue.h"
int main(){
    auto* priorityQueue = new PriorityQueue();
    cout << "Options:\n"
            "1 - Enqueue an element\n"
            "2 - Dequeue an element\n"
            "3 - Exit the program\n\n";
    int option, element, priority;
    pair<int, int> pair1;
    do{
        cout << "Enter your option: ";
        cin >> option;
        switch (option) {
            case 1:
                cout << "Enter the element to enqueue: ";
                cin >> element;
                cout << "Enter the priority of the element: ";
                cin >> priority;
                pair1 = make_pair(priority, element);
                priorityQueue->enqueue(pair1);
                cout << "Element enqueued successfully.\n";
                break;
            case 2:
                pair1 = priorityQueue->dequeue();
                cout << "Dequeued Element:\n"
                        "Element: "<< pair1.second << ", Priority: " << pair1.first << '\n';
                break;
            default:
                return 0;
        }
        priorityQueue->print();
        cout << '\n';
    } while (option != 3);
    return 0;
}