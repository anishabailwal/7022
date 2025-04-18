/* 6. Write a C++ program to create an abstract class Employee with abstract methods calculateSalary() 
and displayInfo(). Create derived classes Manager and Programmer that extend the Employee class and 
implement the respective methods to calculate salary and display information for each role. */


#include <iostream>
#include <string>
using namespace std;

// Abstract class Employee
class Employee {
public:
    virtual void calculateSalary() = 0; // Pure virtual function to calculate salary
    virtual void displayInfo() = 0;      // Pure virtual function to display information
};

// Derived class Manager
class Manager : public Employee {
public:
    string name;
    float baseSalary;
    float bonus;

    void calculateSalary() override {
        float totalSalary = baseSalary + bonus;
        cout << "Manager's Total Salary: " << totalSalary << endl;
    }

    void displayInfo() override {
        cout << "Manager Name: " << name << endl;
        cout << "Base Salary: " << baseSalary << endl;
        cout << "Bonus: " << bonus << endl;
    }
};

// Derived class Programmer
class Programmer : public Employee {
public:
    string name;
    float baseSalary;
    int numberOfProjects;

    void calculateSalary(){
        float totalSalary = baseSalary + (numberOfProjects * 4500); // Assuming 3000 per project
        cout << "Programmer's Total Salary: " << totalSalary << endl;
    }

    void displayInfo() {
        cout << "Programmer Name: " << name << endl;
        cout << "Base Salary: " << baseSalary << endl;
        cout << "Number of Projects: " << numberOfProjects << endl;
    }
};

// Main function
int main() {
    Manager manager;
    manager.name = "Alice";
    manager.baseSalary = 85000;
    manager.bonus = 3500;

    Programmer programmer;
    programmer.name = "Bob";
    programmer.baseSalary = 35000;
    programmer.numberOfProjects = 3;

    cout << "Manager Information:" << endl;
    manager.displayInfo();
    manager.calculateSalary();

    cout << endl;

    cout << "Programmer Information:" << endl;
    programmer.displayInfo();
    programmer.calculateSalary();

    return 0;
}


/* Output

Manager Information:
Manager Name: Alice
Base Salary: 85000
Bonus: 3500
Manager's Total Salary: 88500

Programmer Information:
Programmer Name: Bob
Base Salary: 35000
Number of Projects: 3
Programmer's Total Salary: 48500

 */