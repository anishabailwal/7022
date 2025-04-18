#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;
    char gender;

public:
    // Default constructor
    Person()
    {
        name = "Unknown";
        age = 0;
        gender = 'U'; // 'U' for Unknown
    }

    // Method to set person details
    void setDetails(string _name, int _age, char _gender)
    {
        name = _name;
        age = _age;
        gender = _gender;
    }

    // Method to display person details
    void displayDetails() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

int main()
{
    // Create a Person object using default constructor
    Person person1;

    // Display default details
    cout << "Default Details:" << endl;
    person1.displayDetails();

    // Set new details
    person1.setDetails("Alice", 30, 'F');

    // Display updated details
    cout << "\nUpdated Details:" << endl;
    person1.displayDetails();

    return 0;
}
