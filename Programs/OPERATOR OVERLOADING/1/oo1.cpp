// 1. Define a class Complex to represent complex numbers. Overload the + operator to add two complex numbers.
#include <iostream>
using namespace std;

class Complex
{
	int a, b;

public:
	void get()
	{
		cout << "Enter complex number : ";
		cin >> a >> b;
	}
	Complex operator+(Complex x)
	{
		Complex y;
		y.a = a + x.a;
		y.b = b + x.b;
		return y;
	}
	void display()
	{
		cout << "Addition of complex number : " << a << "+ i" << b;
	}
};

int main()
{
	Complex obj1, obj2, result;
	obj1.get();
	obj2.get();
	result = obj1 + obj2;
	result.display();
}

/*
Enter complex number : 12 98
Enter complex number : 32 58
Addition of complex number : 44 + i156
*/
