// 4. Write a C++ program to create a class called Employee with methods called work() and getSalary(). Create a derived class called HRManager that overrides the work() method and adds a new method called addEmployee().

#include <iostream>
using namespace std;

class Employee
{
public:
    void work()
    {
        cout << "\nEmployee is working" << endl;
    }

    double getSalary()
    {
        return salary;
    }

protected:
    double salary;
};

class HRManager : public Employee
{
public:
    void work()
    {
        cout << "HR Manager is working." << endl;
    }

    void addEmployee(Employee &emp)
    {
        cout << "Employee added." << endl;
    }
};

int main()
{
    Employee emp;
    HRManager manager;

    emp.work();
    manager.work();

    manager.addEmployee(emp);

    return 0;
}

// ----- OUTPUT -----
// Employee is working   
// HR Manager is working.
// Employee added.       