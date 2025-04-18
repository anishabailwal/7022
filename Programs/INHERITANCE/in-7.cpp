// 7. Write a C++ program to create a class known as Person with methods called getFirstName() and getLastName(). Create a derived class called Employee that adds a new method named getEmployeeId() and overrides the getLastName() method to include the employee's job title

#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;

public:
    Person(string first, string last) : firstName(first), lastName(last) {}

    string getFirstName() const
    {
        return firstName;
    }

    string getLastName() const
    {
        return lastName;
    }
};

class Employee : public Person
{
private:
    string employeeId;
    string jobTitle;

public:
    Employee(string first, string last, string id, string title)
        : Person(first, last), employeeId(id), jobTitle(title) {}

    string getEmployeeId() const
    {
        return employeeId;
    }

    string getLastName() const
    {
        return lastName + ", " + jobTitle;
    }
};

int main()
{
    Employee emp("Gurdeep", "singh", "4108", "Programmer");

    cout << "First Name: " << emp.getFirstName() << endl;
    cout << "Last Name: " << emp.getLastName() << endl;
    cout << "Employee ID: " << emp.getEmployeeId() << endl;

    return 0;
}
