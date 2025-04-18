#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;
    string country;

public:
    // Setter methods
    void setName(string _name)
    {
        name = _name;
    }

    void setAge(int _age)
    {
        age = _age;
    }

    void setCountry(string _country)
    {
        country = _country;
    }

    // Getter methods
    string getName() const
    {
        return name;
    }

    int getAge() const
    {
        return age;
    }

    string getCountry() const
    {
        return country;
    }
};

int main()
{
    // Create a Person object
    Person person;

    // Get input from user for person details
    string name;
    int age;
    string country;

    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;
    cin.ignore(); // Ignore newline character in input buffer

    cout << "Enter country: ";
    getline(cin, country);

    // Set person details using setter methods
    person.setName(name);
    person.setAge(age);
    person.setCountry(country);

    // Display person details using getter methods
    cout << "\nPerson Details:" << endl;
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;

    return 0;
}
