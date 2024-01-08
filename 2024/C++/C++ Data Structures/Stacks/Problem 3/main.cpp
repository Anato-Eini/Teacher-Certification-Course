#include "Stack.h"
int main() {
    std::cout << "Operations:" << std::endl;
    std::cout << "1 - Enter a string" << std::endl;
    std::cout << "2 - Undo and print" << std::endl;
    std::cout << "3 - Redo and print" << std::endl;
    std::cout << "4 - Exit" << std::endl << std::endl;
    auto* undo = new Stack(), *redo = new Stack();
    while (true) {
        int operation;
        std::cout << "Enter an operation: ";
        std::cin >> operation;

        if (operation == 1) {
            std::string text;
            std::cout << "Enter a string: ";
            std::cin.ignore();
            std::getline(std::cin, text);
            undo->push(text);
            cout << "Current text: " << undo->peek() << '\n';
        }
        else if (operation == 2) {
            if(!undo->isEmpty()){
                redo->push(undo->pop());
                cout << "Current text: " << undo->peek() << "\n";
            }else cout << "No more operations to undo. \n";
        }
        else if (operation == 3){
            if(!redo->isEmpty()){
                undo->push(redo->pop());
                cout << "Current text: " << undo->peek() << "\n";
            }else cout << "No more operations to redo.\n";
        }
        else if (operation == 4){
            std::cout << "Exiting the program." << std::endl;
            break;
        }
        else {
            std::cout << "Invalid operation. Try again." << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}