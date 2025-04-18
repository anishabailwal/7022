/* 9. Write a C++ program to create an abstract class Person with abstract methods eat() and exercise().
Create derived classes Athlete and LazyPerson that extend the Person class and implement the respective methods to
describe how each person eats and exercises. */

#include <iostream>
using namespace std;

class Person
{
public:
	virtual void eat() = 0;
	virtual void exercise() = 0;
};

class Athlete : public Person
{
public:
	void eat()
	{
		cout << "An athlete eats a healthy food \n";
	}
	void exercise()
	{
		cout << "An athlete exercises regularly  \n";
	}
};

class LazyPerson : public Person
{
public:
	void eat()
	{
		cout << "A lazy person eat junk food. \n";
	}
	void exercise()
	{
		cout << "A lazy person didn't do exercises \n";
	}
};

int main()
{
	Athlete athlete;
	LazyPerson lazyPerson;
	cout << "Athlete's routine:\n";
	athlete.eat();
	athlete.exercise();
	cout << "\n";
	cout << "Lazy person's routine:\n";
	lazyPerson.eat();
	lazyPerson.exercise();
}

/*

Athlete's routine:
An athlete eats a healthy food
An athlete exercises regularly

Lazy person's routine:
A lazy person eat junk food.
A lazy person didn't do exercises

*/
