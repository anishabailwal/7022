#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

class Employee {
private:
    int employee_id;
    string employee_name;
    double employee_salary;

public:
    // Setter methods
    void setEmployeeID(int id) {
        employee_id = id;
    }

    void setEmployeeName(const string& name) {
        employee_name = name;
    }

    void setEmployeeSalary(double salary) {
        employee_salary = salary;
    }

    // Getter methods
    int getEmployeeID() const {
        return employee_id;
    }

    string getEmployeeName() const {
        return employee_name;
    }

    string getEmployeeSalary() const {
        stringstream salaryStream;
        salaryStream << fixed << setprecision(2) << employee_salary;
        return salaryStream.str();
    }
};

int main() {
    // Create an Employee object
    Employee emp;

    // Get input from user for employee details
    int id;
    string name;
    double salary;

    cout << "Enter employee ID: ";
    cin >> id;
    emp.setEmployeeID(id);

    cout << "Enter employee name: ";
    cin.ignore(); // Ignore newline character in input buffer
    getline(cin, name);
    emp.setEmployeeName(name);

    cout << "Enter employee salary: $";
    cin >> salary;
    emp.setEmployeeSalary(salary);

    // Display employee details
    cout << "\nEmployee Details:" << endl;
    cout << "Employee ID: " << emp.getEmployeeID() << endl;
    cout << "Employee Name: " << emp.getEmployeeName() << endl;
    cout << "Employee Salary: $" << emp.getEmployeeSalary() << endl;

    // Ask user if they want to modify the ID or name
    char choice;
    cout << "\nDo you want to modify the ID or name? (Y/N): ";
    cin >> choice;

    if (choice == 'Y' || choice == 'y') {
        cout << "Enter new employee ID: ";
        cin >> id;
        emp.setEmployeeID(id);

        cout << "Enter new employee name: ";
        cin.ignore(); // Ignore newline character in input buffer
        getline(cin, name);
        emp.setEmployeeName(name);

        // Display modified employee details
        cout << "\nModified Employee Details:" << endl;
        cout << "Employee ID: " << emp.getEmployeeID() << endl;
        cout << "Employee Name: " << emp.getEmployeeName() << endl;
        cout << "Employee Salary: $" << emp.getEmployeeSalary() << endl;
    } else {
        cout << "Thank you!" << endl;
    }

    return 0;
}
