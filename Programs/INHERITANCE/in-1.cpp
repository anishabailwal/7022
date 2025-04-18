// 1. Write a C++ program to create a class called Animal with a method called makeSound(). Create a derived class called Cat that overrides the makeSound() method to bark.

#include <iostream>
using namespace std;

class Animal
{
public:
    void makeSound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << "Cat barks" << endl;
    }
};

int main()
{
    Animal animal;
    Cat cat;

    cout << "Animal sound: ";
    animal.makeSound();

    cout << "Cat sound: ";
    cat.makeSound();

    return 0;
}

// ----- OUTPUT -----
// Animal sound: Animal makes a sound
// Cat sound: Cat barks