#include<stdio.h>
#include <limits.h>
int main(){
    int input, maximum = INT_MIN, minimum = INT_MAX;
    do {
        printf("Enter a number: ");
        scanf("%d", &input);
        if(input != 0){
            if (maximum < input) maximum = input;
            if (minimum > input) minimum = input;
        }
    }while(input != 0);
    printf("The maximum number is: %d\n"
           "The minimum number is: %d", maximum, minimum);
    return 0;
}