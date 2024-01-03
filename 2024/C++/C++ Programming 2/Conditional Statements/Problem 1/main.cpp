#include <iostream>
#include <iomanip>
int main(){
    float purchaseAmount, discount;
    std::cout << "Enter the total purchase amount: ";
    std::cin >> purchaseAmount;
    std::cout << "Initial Purchase Amount: " << std::fixed << std::setprecision(2) << purchaseAmount << "\n";
    discount = (purchaseAmount > 5000) ? purchaseAmount * 0.1 : purchaseAmount * 0.05;
    std::cout << "Discount: " << std:: fixed << std::setprecision(2) << discount << "\nFinal Price: " <<
              purchaseAmount - discount;
    return 0;
}