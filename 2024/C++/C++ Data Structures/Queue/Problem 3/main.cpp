#include "Queue.h"

int main() {
    Queue* queue = new Queue();
    std::cout << "Welcome to the Restaurant Waitlist Program!\n\n";
    std::cout << "Options:\n";
    std::cout << "1 - Join the waitlist\n";
    std::cout << "2 - Be seated\n";
    std::cout << "3 - Exit the program\n\n";

    while (true) {
        int option;
        std::cout << "Enter your option: ";
        std::cin >> option;

        if (option == 1) {
            cout << "You have joined the waitlist. There are currently "<< queue->getSize()
            <<" customer/s ahead of you.\n";
            queue->enqueue();
        } else if (option == 2) {
            cout << "Customer " << queue->dequeue() << " is now being seated.\n";
        } else if (option == 3) {
            std::cout << "Exiting the program. Thank you for using the Restaurant Waitlist Program!\n";
            break;
        } else {
            std::cout << "Invalid option. Please try again.\n\n";
        }
        queue->print();
        cout << '\n';
    }

    return 0;
}