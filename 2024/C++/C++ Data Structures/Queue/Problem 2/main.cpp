#include <iostream>
#include "Queue.h"
int main() {
    Queue* queue = new Queue();
    std::cout << "Options:\n";
    std::cout << "1 - Add an element to the queue\n";
    std::cout << "2 - Remove an element from the queue\n";
    std::cout << "3 - Count elements in the queue\n";
    std::cout << "4 - Exit the program\n\n";

    while (true) {
        std::string option;
        std::cout << "Enter your option: ";
        std::cin >> option;

        if (option == "1") {
            int element;
            std::cout << "Enter the element to add: ";
            std::cin >> element;
            queue->enqueue(element);
            std::cout << "Element " << element << " has been added to the queue.\n";
        } else if (option == "2") {
            std::cout << "Removed element: " << queue->dequeue() << '\n';
        } else if (option == "3") {
            std::cout << "Number of elements in the queue: " << queue->getSize() << '\n';
        } else if (option == "4") {
            std::cout << "Exiting the program.\n";
            break;
        } else {
            std::cout << "Invalid option. Please try again.\n";
        }
        std::cout << "\n";
    }

    return 0;
}