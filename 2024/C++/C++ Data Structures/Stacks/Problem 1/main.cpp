#include "Stack.h"
using namespace std;
int main(){
    auto* stack = new Stack();
    string input, output;
    cout << "Enter a string: ";
    getline(cin, input);
    for(char i : input){
        stack->push(i);
        cout << "\nTop of stack: " << stack->peek();
    }
    input = "";
    while(!stack->isEmpty()){
        input += stack->pop();
    }
    cout << "\nReversed string: " << input;
    return 0;
}