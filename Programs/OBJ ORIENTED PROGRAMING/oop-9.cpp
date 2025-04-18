#include <iostream>
#include <string>
#include <ctime> // For time related functions
#include <sstream> // For string stream
#include <iomanip> // For date formatting

class Employee {
private:
    std::string name;
    double salary;
    time_t hireDate; // Storing hire date as a time_t (time since epoch)

public:
    // Constructor to initialize attributes
    Employee(std::string empName, double empSalary, time_t empHireDate) {
        name = empName;
        salary = empSalary;
        hireDate = empHireDate;
    }

    // Method to calculate years of service
    int calculateYearsOfService() {
        time_t now = time(0); // Get current time

        // Calculate difference in seconds between current time and hire date
        double difference = difftime(now, hireDate);

        // Convert seconds to years (assuming 365 days per year)
        int years = static_cast<int>(difference / (365 * 24 * 60 * 60));

        return years;
    }

    // Getter method for employee name
    std::string getName() {
        return name;
    }

    // Getter method for employee salary
    double getSalary() {
        return salary;
    }

    // Getter method for employee hire date
    time_t getHireDate() {
        return hireDate;
    }
};

// Function to parse date string (YYYY-MM-DD) and convert it to time_t
time_t parseDate(const std::string& dateStr) {
    std::tm tm = {};
    std::istringstream ss(dateStr);
    ss >> std::get_time(&tm, "%Y-%m-%d");
    return mktime(&tm);
}

int main() {
    // Input employee details
    std::string name;
    double salary;
    std::string hireDateStr;

    std::cout << "Enter employee name: ";
    std::cin >> name;

    std::cout << "Enter employee salary: ";
    std::cin >> salary;

    std::cout << "Enter join date (YYYY-MM-DD): ";
    std::cin >> hireDateStr;

    // Parse join date string and convert to time_t
    time_t hireDate = parseDate(hireDateStr);

    // Create an Employee object with name, salary, and hire date
    Employee employee(name, salary, hireDate);

    // Calculate years of service
    int yearsOfService = employee.calculateYearsOfService();

    // Display employee information and years of service
    std::cout << "Employee Name: " << employee.getName() << std::endl;
    std::cout << "Employee Salary: $" << employee.getSalary() << std::endl;
    std::cout << "Join Date: " << hireDateStr << std::endl;
    std::cout << "Years of Service: " << yearsOfService << std::endl;

    return 0;
}

