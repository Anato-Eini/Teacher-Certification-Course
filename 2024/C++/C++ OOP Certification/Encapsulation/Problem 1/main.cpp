#include <iostream>
#include <string>
#include <utility>
class Car{
    std::string brand, color;
    int size;
public:
    Car(std::string brand, int size, std::string color) : brand(std::move(brand)), size(size), color(std::move(color))  {}

    [[nodiscard]] const std::string &getBrand() const {
        return brand;
    }

    [[nodiscard]] const std::string &getColor() const {
        return color;
    }

    [[nodiscard]] int getSize() const {
        return size;
    }

};
int main() {
    // Get user inputs
    std::string brand, color;
    int size;

    std::cout << "Enter brand: ";
    std::cin >> brand;

    std::cout << "Enter size: ";
    std::cin >> size;

    std::cout << "Enter color: ";
    std::cin >> color;

    // Create a Car object
    Car myCar(brand, size, color);

    // Get and display the properties
    std::cout << "Brand: " << myCar.getBrand() << std::endl;
    std::cout << "Size: " << myCar.getSize() << std::endl;
    std::cout << "Color: " << myCar.getColor() << std::endl;

    return 0;
}
