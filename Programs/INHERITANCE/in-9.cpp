// 9. Write a C++ program to create a vehicle class hierarchy. The base class should be Vehicle, with derived classes Truck, Car and Motorcycle. Each derived class should have properties such as make, model, year, and fuel type. Implement methods for calculating fuel efficiency, distance traveled, and maximum speed.

#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string make;
    string model;
    int year;
    string fuelType;

public:
    Vehicle(string _make, string _model, int _year, string _fuelType)
        : make(_make), model(_model), year(_year), fuelType(_fuelType) {}

    double calculateFuelEfficiency(double fuelConsumed, double distance)
    {
        if (fuelConsumed <= 0 || distance <= 0)
        {
            return 0.0;
        }
        return distance / fuelConsumed;
    }

    double calculateDistance(double speed, double time)
    {
        if (speed <= 0 || time <= 0)
        {
            return 0.0;
        }
        return speed * time;
    }

    virtual double getMaxSpeed() = 0;
};

class Truck : public Vehicle
{
private:
    double maxSpeed;

public:
    Truck(string _make, string _model, int _year, string _fuelType, double _maxSpeed)
        : Vehicle(_make, _model, _year, _fuelType), maxSpeed(_maxSpeed) {}

    double getMaxSpeed() override
    {
        return maxSpeed;
    }
};

class Car : public Vehicle
{
private:
    double maxSpeed;

public:
    Car(string _make, string _model, int _year, string _fuelType, double _maxSpeed)
        : Vehicle(_make, _model, _year, _fuelType), maxSpeed(_maxSpeed) {}

    double getMaxSpeed() override
    {
        return maxSpeed;
    }
};

class Motorcycle : public Vehicle
{
private:
    double maxSpeed;

public:
    Motorcycle(string _make, string _model, int _year, string _fuelType, double _maxSpeed)
        : Vehicle(_make, _model, _year, _fuelType), maxSpeed(_maxSpeed) {}

    double getMaxSpeed() override
    {
        return maxSpeed;
    }
};

int main()
{
    Truck truck("Tata pickup", "intra V50 LNT", 2020, "Diesel", 120.0);
    Car car("Hundai", "i20", 2019, "petrol", 150.0);
    Motorcycle motorcycle("Honda", "Splendor", 2021, "petrol", 180.0);

    cout << "\nTruck fuel efficiency: " << truck.calculateFuelEfficiency(20.0, 100.0) << " miles/gallon" << endl;
    cout << "Car fuel efficiency: " << car.calculateFuelEfficiency(15.0, 100.0) << " miles/gallon" << endl;
    cout << "Motorcycle fuel efficiency: " << motorcycle.calculateFuelEfficiency(10.0, 100.0) << " miles/gallon" << endl;

    cout << "\nTruck distance traveled: " << truck.calculateDistance(60.0, 2.0) << " miles" << endl;
    cout << "Car distance traveled: " << car.calculateDistance(70.0, 2.5) << " miles" << endl;
    cout << "Motorcycle distance traveled: " << motorcycle.calculateDistance(80.0, 1.5) << " miles" << endl;

    cout << "\nTruck max speed: " << truck.getMaxSpeed() << " mph" << endl;
    cout << "Car max speed: " << car.getMaxSpeed() << " mph" << endl;
    cout << "Motorcycle max speed: " << motorcycle.getMaxSpeed() << " mph" << endl;

    return 0;
}

// ----- OUTPUT -----
// Truck fuel efficiency: 5 miles/gallon
// Car fuel efficiency: 6.66667 miles/gallon
// Motorcycle fuel efficiency: 10 miles/gallon

// Truck distance traveled: 120 miles
// Car distance traveled: 175 miles
// Motorcycle distance traveled: 120 miles

// Truck max speed: 120 mph
// Car max speed: 150 mph
// Motorcycle max speed: 180 mph