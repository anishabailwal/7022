#include <iostream>
#include <string>

class Car {
private:
    std::string company_name;
    std::string model_name;
    int year;
    double mileage;

public:
    // Constructor
    Car(const std::string &company, const std::string &model, int yr, double m) {
        company_name = company;
        model_name = model;
        year = yr;
        mileage = m;
    }

    // Getter method for company name
    std::string getCompanyName() const {
        return company_name;
    }

    // Setter method for company name
    void setCompanyName(const std::string &company) {
        company_name = company;
    }

    // Getter method for model name
    std::string getModelName() const {
        return model_name;
    }

    // Setter method for model name
    void setModelName(const std::string &model) {
        model_name = model;
    }

    // Getter method for year
    int getYear() const {
        return year;
    }

    // Setter method for year
    void setYear(int yr) {
        year = yr;
    }

    // Getter method for mileage
    double getMileage() const {
        return mileage;
    }
};

int main() {
    // Creating a Car object
    Car car("Toyota", "Corolla", 2020, 50000.5);

    // Displaying car details
    std::cout << "Company: " << car.getCompanyName() << std::endl;
    std::cout << "Model: " << car.getModelName() << std::endl;
    std::cout << "Year: " << car.getYear() << std::endl;
    std::cout << "Mileage: " << car.getMileage() << std::endl;

    // Prompting user to choose action
    std::cout << "\nEnter '1' to edit company name, '2' to edit model name, '3' to edit year: ";
    int choice;
    std::cin >> choice;

    // Perform action based on user's choice
    std::string newCompanyName, newModelName;
    int newYear;

    switch(choice) {
        case 1:
            std::cout << "Enter new company name: ";
            std::cin >> newCompanyName;
            car.setCompanyName(newCompanyName);
            break;
        case 2:
            std::cout << "Enter new model name: ";
            std::cin >> newModelName;
            car.setModelName(newModelName);
            break;
        case 3:
            std::cout << "Enter new year: ";
            std::cin >> newYear;
            car.setYear(newYear);
            break;
        default:
            std::cout << "Invalid choice!";
            break;
    }

    // Displaying modified car details
    std::cout << "\nModified details:" << std::endl;
    std::cout << "Company: " << car.getCompanyName() << std::endl;
    std::cout << "Model: " << car.getModelName() << std::endl;
    std::cout << "Year: " << car.getYear() << std::endl;
    std::cout << "Mileage: " << car.getMileage() << std::endl;

    return 0;
}
