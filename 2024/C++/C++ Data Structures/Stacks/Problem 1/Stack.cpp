#include "Stack.h"
#include <string>
void Stack::push(char character){
    head->next = new Node(character, head->next);
}
[[nodiscard]]char Stack::peek() {
    return head->next->value;
}
[[nodiscard]]char Stack::pop() {
    char output = head->next->value;
    head->next = head->next->next;
    return output;
}
[[nodiscard]] bool Stack::isEmpty()  {
    return !head->next;
}