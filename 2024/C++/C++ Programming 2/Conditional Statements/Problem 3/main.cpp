#include <iostream>
int main(){
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    int dup = number, sum = 0;
    while(dup != 0){
        sum = sum * 10 + (dup % 10);
        dup /= 10;
    }
    std::cout << ((sum == number) ? "Palindrome" : "Not a Palindrome");
    return 0;
}