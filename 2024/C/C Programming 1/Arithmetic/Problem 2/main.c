#include <stdio.h>
int main(){
    int firstNumber, secondNumber;
    printf("Enter first integer: ");
    scanf("%d", &firstNumber);
    printf("Enter second integer: ");
    scanf("%d", &secondNumber);
    printf("Sum: %d\n"
           "Difference: %d\n"
           "Product: %d\n"
           "Quotient: %d", firstNumber + secondNumber, firstNumber - secondNumber, firstNumber * secondNumber,
           firstNumber / secondNumber);
    return 0;
}