#include <iostream>
#include <string>

using namespace std;

class Dog
{
private:
    string name;
    string breed;

public:
    Dog(string n, string b)
    {
        name = n;
        breed = b;
    }

    void setName(string n)
    {
        name = n;
    }

    void setBreed(string b)
    {
        breed = b;
    }

    string getName()
    {
        return name;
    }

    string getBreed()
    {
        return breed;
    }

    // Method to print name and breed
    void printInfo()
    {
        cout << "Name: " << name << ", Breed: " << breed << endl;
    }
};

int main()
{
    // Create instances of Dog class
    Dog dog1("Buddy", "Labrador");
    Dog dog2("Max", "German Shepherd");

    // Print initial information
    cout << "Initial Information:" << endl;
    cout << "Dog 1: ";
    dog1.printInfo();
    cout << "Dog 2: ";
    dog2.printInfo();

    // Modify attributes using setter methods
    dog1.setName("Charlie");
    dog2.setBreed("Golden Retriever");

    // Print updated information
    cout << "\nUpdated Information:" << endl;
    cout << "Dog 1: ";
    dog1.printInfo();
    cout << "Dog 2: ";
    dog2.printInfo();

    return 0;
}
