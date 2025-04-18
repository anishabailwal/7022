// 2. Write a C++ program to create a class called Vehicle with a method called drive().Create a derived class called Car that overrides the drive() method to print "Repairing a car".

#include <iostream>
using namespace std;

class Vehicle
{
public:
    void drive()
    {
        cout << "Driving a vehicle" << endl;
    }
};

class Car : public Vehicle
{
public:
    void drive()
    {
        cout << "Repairing a car" << endl;
    }
};

int main()
{
    Vehicle vehicle;
    Car car;

    cout << "While Driving a vehicle: ";
    vehicle.drive();

    cout << "While Driving a car: ";
    car.drive();

    return 0;
}

// ----- OUTPUT -----
// While Driving a vehicle: Driving a vehicle
// While Driving a car: Repairing a car
