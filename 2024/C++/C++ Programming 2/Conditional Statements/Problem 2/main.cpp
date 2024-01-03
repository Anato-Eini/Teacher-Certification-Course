#include <iostream>
#include <iomanip>
int main(){
    float weight, height, bmi;
    std::cout << "Please enter your weight in kilograms: ";
    std::cin >> weight;
    std::cout << "Please enter your height in meters: ";
    std::cin >> height;
    bmi = weight / (height * height);
    std::cout << "Your BMI is " << std::fixed << std::setprecision(2) << bmi << '\n';
    std::cout << ((bmi >= 30) ? "BMI is Obese" : (bmi >= 25) ? "BMI is Overweight" : (bmi >= 18.5) ? "BMI is Normal" :
                                                                                     "BMI is Underweight");
    return 0;
}