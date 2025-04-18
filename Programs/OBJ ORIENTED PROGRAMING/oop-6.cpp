#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    string name;
    string jobTitle;
    double salary;

public:
    Employee(string n, string jt, double s)
    {
        name = n;
        jobTitle = jt;
        salary = s;
    }

    double calculateAnnualSalary()
    {
        return salary * 12;
    }

    void updateSalary(double newSalary)
    {
        salary = newSalary;
    }

    string getName()
    {
        return name;
    }

    string getJobTitle()
    {
        return jobTitle;
    }

    double getSalary()
    {
        return salary;
    }
};

int main()
{
    string name, jobTitle;
    double salary;

    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter job title: ";
    getline(cin, jobTitle);

    cout << "Enter monthly salary: ";
    cin >> salary;

    Employee emp(name, jobTitle, salary);

    cout << "\nEmployee Details:" << endl;
    cout << "Name: " << emp.getName() << endl;
    cout << "Job Title: " << emp.getJobTitle() << endl;
    cout << "Monthly Salary: $" << emp.getSalary() << endl;
    cout << "Annual Salary: $" << emp.calculateAnnualSalary() << endl;

    double newSalary;
    cout << "\nEnter new salary: $";
    cin >> newSalary;
    emp.updateSalary(newSalary);

    cout << "\nUpdated Monthly Salary: $" << emp.getSalary() << endl;
    cout << "Updated Annual Salary: $" << emp.calculateAnnualSalary() << endl;

    return 0;
}
