// 2. Create a class Fraction to represent fractions. Overload the + operator to add two fractions.
#include <iostream>
using namespace std;

class Fraction
{
	int n, d;

public:
	void get();
	Fraction operator+(Fraction x)
	{
		Fraction a;
		a.n = (n * x.d) + (d * x.n);
		a.d = d * x.d;
		return a;
	}
	void display();
};

void Fraction::get()
{
	cout << "Enter numerator : ";
	cin >> n;
	cout << "Enter denominator : ";
	cin >> d;
}

void Fraction::display()
{
	cout << "Addition of Fraction : " << n << " / " << d;
}

int main()
{
	Fraction n1, n2, ans;
	n1.get();
	n2.get();
	ans = n1 + n2;
	ans.display();
}

/*
Enter numerator : 11
Enter denominator : 10
Enter numerator : 5
Enter denominator : 6
Addition of Fraction : 116 / 60
*/
