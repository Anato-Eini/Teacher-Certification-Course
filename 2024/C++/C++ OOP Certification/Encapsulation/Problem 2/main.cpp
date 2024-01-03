#include <iostream>
#include <string>
class Employee{
    int id, yearEmployed;
    std::string name, role;
public:
    [[nodiscard]] int getId() const{
        return id;
    }

    [[nodiscard]] int getYearEmployed() const{
        return yearEmployed;
    }

    [[nodiscard]] const std::string &getName() const{
        return name;
    }

    [[nodiscard]] const std::string &getRole() const{
        return role;
    }

    void setId(int id){
        this->id = id;
    }

    void setYearEmployed(int yearEmployed){
        this->yearEmployed = yearEmployed;
    }

    void setName(std::string name){
        this->name = name;
    }

    void setRole(std::string role){
        this->role = role;
    }

};
int main() {
    // Get user inputs
    int id;
    std::string name, role;
    int yearEmployed;

    std::cout << "Enter employee ID: ";
    std::cin >> id;
    std::cin.ignore(); // Ignore the newline character in the input buffer

    std::cout << "Enter employee name: ";
    std::getline(std::cin, name);

    std::cout << "Enter employee role: ";
    std::getline(std::cin, role);

    std::cout << "Enter year employed: ";
    std::cin >> yearEmployed;

    // Create an Employee object
    Employee employee;

    // Use setters to set the values
    employee.setId(id);
    employee.setName(name);
    employee.setRole(role);
    employee.setYearEmployed(yearEmployed);

    // Get and display the properties
    std::cout << "Employee ID: " << employee.getId() << std::endl;
    std::cout << "Employee Name: " << employee.getName() << std::endl;
    std::cout << "Employee Role: " << employee.getRole() << std::endl;
    std::cout << "Year Employed: " << employee.getYearEmployed() << std::endl;

    return 0;
}