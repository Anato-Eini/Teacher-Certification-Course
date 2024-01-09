#include <stdio.h>
int main(){
    int firstNumber, secondNumber;
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);
    printf("Remainder of %d/%d is: %d", firstNumber, secondNumber, firstNumber % secondNumber);
    return 0;
}