// 10. Write a C++ program that creates a class hierarchy for employees of a company. The base class should be Employee, with derived classes Manager, Developer, and Programmer. Each derived class should have properties such as name, address, salary, and job title. Implement methods for calculating bonuses, generating performance reports, and managing projects.

#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    string name;
    string address;
    double salary;
    string jobTitle;

public:
    Employee(string _name, string _address, double _salary, string _jobTitle)
        : name(_name), address(_address), salary(_salary), jobTitle(_jobTitle) {}

    double calculateBonus() const
    {
        return 0.0;
    }

    void generatePerformanceReport() const
    {
        cout << "Performance report for " << jobTitle << " " << name << " is generated." << endl;
    }

    void manageProjects() const
    {
        cout << "Projects are managed by " << jobTitle << " " << name << "." << endl;
    }
};

class Manager : public Employee
{
public:
    Manager(string _name, string _address, double _salary)
        : Employee(_name, _address, _salary, "Manager") {}

    double calculateBonus() const
    {
        return salary * 0.1;
    }
};

class Developer : public Employee
{
public:
    Developer(string _name, string _address, double _salary)
        : Employee(_name, _address, _salary, "Developer") {}

    double calculateBonus() const
    {
        return salary * 0.05;
    }
};

class Programmer : public Employee
{
public:
    Programmer(string _name, string _address, double _salary)
        : Employee(_name, _address, _salary, "Programmer") {}

    double calculateBonus() const
    {
        return salary * 0.03;
    }
};

int main()
{
    Manager manager("Tarun", "Chandigarh", 80000.0);
    Developer developer("Vikram", "Maloya", 60000.0);
    Programmer programmer("Himanshu", "sector 11", 60000.0);

    cout << "Manager Bonus: " << manager.calculateBonus() << endl;
    cout << "Developer Bonus: " << developer.calculateBonus() << endl;
    cout << "Programmer Bonus: " << programmer.calculateBonus() << endl;

    manager.generatePerformanceReport();
    developer.generatePerformanceReport();
    programmer.generatePerformanceReport();

    manager.manageProjects();
    developer.manageProjects();
    programmer.manageProjects();

    return 0;
}

// ----- OUTPUT -----

// Programmer Bonus: 1800
// Performance report for Manager Tarun is generated.
// Performance report for Developer Vikram is generated.
// Performance report for Programmer Himanshu is generated.
// Projects are managed by Manager Tarun.
// Projects are managed by Developer Vikram.
// Projects are managed by Programmer Himanshu.