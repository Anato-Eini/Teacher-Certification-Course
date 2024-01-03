#include <iostream>
#include <iomanip>
#include <cmath>
class Circle{
    double radius, circumference, area;
public:
    explicit Circle(double radius) : radius(radius), circumference(2 * M_PI * radius), area(M_PI * radius * radius){}

    [[nodiscard]]double getRadius() const{
        return radius;
    }
    [[nodiscard]]double getCircumference() const{
        return circumference;
    }
    [[nodiscard]]double getArea() const{
        return area;
    }

};
int main(){
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    Circle myCircle(radius);
    std::cout << std::fixed << std::setprecision(2) << "Radius: " << myCircle.getRadius() << "\nCircumference: "
        << myCircle.getCircumference() << "\nArea: " << myCircle.getArea();
    return 0;
}