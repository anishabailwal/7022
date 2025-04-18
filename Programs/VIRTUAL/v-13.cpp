/* 13. Write a C++ program to create an abstract class Bird with abstract methods fly() and makeSound(). 
Create derived classes Eagle and Hawk that extend the Bird class and implement the respective methods to 
describe how each bird flies and makes a sound. */

#include <iostream>
using namespace std;

class Bird {
public:
    virtual void makeSound() = 0;
    virtual void fly() = 0;
};

class Eagle : public Bird {
public:
    void makeSound() {
        cout << "Eagle fly high in the sky " << endl;
    }
    void fly() {
        cout << "Eagle braying" << endl;
    }
};

class Hawk : public Bird {
public:
    void makeSound() {
        cout << "Hawk fly on ground level" << endl;
    }
    void fly() override
    {
        cout << "hawk soar" << endl;
    }
};

int main() {

    Eagle obj;
    obj.fly();
    obj.makeSound();

    Hawk ob1;
    ob1.fly();
    ob1.makeSound();

    return 0;
}

/* Output :

Eagle braying
Eagle fly high in the sky
hawk soar
Hawk fly on ground level

 */