#include "PriorityQueue.h"
int main(){
    auto* priorityQueue = new PriorityQueue();
    cout << "Options:\n"
            "1 - Enqueue an element\n"
            "2 - Dequeue an element\n"
            "3 - Search for an element\n"
            "4 - Exit the program\n\n";
    int option, element, priority;
    pair<int, int> pair1;
    while(true){
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
            case 3:
                cout << "Enter the element to search: ";
                cin >> element;
                pair1 = priorityQueue->isPresent(element);
                cout << (pair1.second == -1 ? "Element not found in the Priority Queue.":
                "Element found in the Priority Queue:\n"
                "Element: " + to_string(pair1.second) + ", Priority: " + to_string(pair1.first)) << "\n\n";
                continue;
            default:
                return 0;
        }
        priorityQueue->print();
        cout << '\n';
    }
}