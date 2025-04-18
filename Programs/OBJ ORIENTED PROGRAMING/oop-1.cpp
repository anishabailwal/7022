#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }

    void printInfo()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    Person person1("John", 30);
    Person person2("Alice", 25);

    cout << "Person 1: ";
    person1.printInfo();
    cout << "Person 2: ";
    person2.printInfo();

    return 0;
}
