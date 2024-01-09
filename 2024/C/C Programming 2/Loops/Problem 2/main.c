#include<stdio.h>
int main(){
    int number, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    for(int i = 1; number / i > 0; i *= 10) sum += (number / i % 10);
    printf("The sum of the digits is: %d", sum);
    return 0;
}