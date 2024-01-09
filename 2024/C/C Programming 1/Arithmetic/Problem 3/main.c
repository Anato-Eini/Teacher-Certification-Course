#include <stdio.h>
int main(){
    float celsius;
    printf("Enter a Celsius value: ");
    scanf("%f", &celsius);
    printf("%.2f Celsius is %.2f Fahrenheit", celsius, (celsius * (9 / 5.0)) + 32);
    return 0;
}