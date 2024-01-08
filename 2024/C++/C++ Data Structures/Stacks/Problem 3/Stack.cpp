#include "Stack.h"
#include <string>
void Stack::push(const string& input){
    head->next = new Node(input, head->next);
}
[[nodiscard]] string Stack::peek() {
    return head->next->value;
}
[[nodiscard]] string Stack::pop() {
    string output = head->next->value;
    head->next = head->next->next;
    return output;
}
[[nodiscard]] bool Stack::isEmpty()  {
    return !head->next;
}