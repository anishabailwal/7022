/* 8. Write a C++ program to create an abstract class Vehicle with abstract methods startEngine() and stopEngine(). 
Create derived classes Car and Motorcycle that extend the Vehicle class and implement the respective methods to 
start and stop the engines for each vehicle type. */


#include <iostream>
using namespace std;

class Vehicle 
{
	public:
	   virtual void startEngine() = 0;
	   virtual void stopEngine() = 0;
};

class Car : public Vehicle {
	public:
	   void startEngine() 
		{
	      cout << "Car engine started.\n";
	   }
	   void stopEngine() 
		{
	      cout << "Car engine stopped.\n";
	   }
};

class Motorcycle : public Vehicle {
	public:
	   void startEngine() 
		{
	      cout << "Motorcycle engine started.\n";
	   }
	   void stopEngine() 
		{
	      cout << "Motorcycle engine stopped.\n";
	   }
};

int main() {
	
   Car myCar;
   Motorcycle myMotorcycle;
   myCar.startEngine();
   myCar.stopEngine();
   myMotorcycle.startEngine();
   myMotorcycle.stopEngine();
}

/*
Car engine started.
Car engine stopped.
Motorcycle engine started.
Motorcycle engine stopped.
*/
