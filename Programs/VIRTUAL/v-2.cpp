/* 2. Write a C++ program to create an abstract class Animal with an abstract method called sound(). 
Create derived classes Lion and Tiger that extend the Animal class and implement the sound() 
method to make a specific sound for each animal.*/

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;
};

class Lion : public Animal {
public:
    void sound() {
        cout << "Lion roars" << endl;
    }
};

class Tiger : public Animal {
public:
    void sound() {
        cout << "Tiger growls" << endl;
    }
};

int main() {
    Lion lion;
    Tiger tiger;

    cout << "The sound of Lion: ";
    lion.sound();

    cout << "The sound of Tiger: ";
    tiger.sound();

    return 0;
}

// Output-:
// The sound of Lion: Lion roars
// The sound of Tiger: Tiger growls
