#include "Stack.h"
using namespace std;
bool isPair(char firstCharacter, char secondCharacter){
    return (firstCharacter == '[' && secondCharacter == ']') ||
           (firstCharacter == '{' && secondCharacter == '}') ||
           (firstCharacter == '(' && secondCharacter == ')');
}
bool isBalanced(const string& input){
    auto* stack = new Stack();
    for(char c: input){
        if(c == '[' || c == '{' || c == '(') stack->push(c);
        else if(stack->isEmpty() || !isPair(stack->pop(), c)) return false;
    }
    return stack->isEmpty();
}

int main(){
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << (isBalanced(input) ? "Balanced." : "Not Balanced.");
    return 0;
}