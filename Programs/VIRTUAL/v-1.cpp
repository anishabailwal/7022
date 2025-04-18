/*1. Write a C++ program to create an abstract class Animal with an abstract method called sound(). Create derived classes Lion and Tiger that extend the Animal class and implement the sound() method to make a specific sound for each animal.*/

#include <iostream>

using namespace std;

class Animal {
public:
    virtual void sound() = 0; 
};

class Lion : public Animal {
public:
    void sound() {
        cout << "Roar" << endl;
    }
};

class Tiger : public Animal {
public:
    void sound() {
        cout << "chuff" << endl;
    }
};

int main() {
    Lion lion;
    Tiger tiger;

    cout << "Lion sound: ";
    lion.sound();

    cout << "Tiger sound: ";
    tiger.sound();

    return 0;
}

/* output :-    

Lion sound: Roar
Tiger sound: chuff

 */