#include<stdio.h>
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for(int i = 1; i <= 10; i++) printf("%d x %d = %d\n", number, i, i * number);
    return 0;
}