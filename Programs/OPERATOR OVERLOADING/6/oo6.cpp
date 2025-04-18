// 6. Implement a class Money to represent money. Overload the + operator to add two amounts of money.
#include <iostream>
using namespace std;

class Money
{
	int rs;
	int p;

public:
	void get();
	void display();
	Money operator+(Money);
};

void Money::get()
{
	cout << "Enter ruppees : ";
	cin >> rs;
	cout << "Enter paise : ";
	cin >> p;
}

void Money::display()
{
	cout << endl
		 << "Total Money : " << rs << " ruppees " << p << " paise";
}

Money Money::operator+(Money m)
{
	Money f;
	f.p = p + m.p;
	f.rs = rs + m.rs;
	if (f.p >= 100)
	{
		int c = f.p / 100;
		f.p = f.p % 100;
		f.rs = f.rs + c;
	}
	return f;
}

int main()
{
	Money m1, m2, ans;
	cout << "Enter first amount : " << endl;
	m1.get();
	cout << endl
		 << "Enter second amount : " << endl;
	m2.get();
	ans = m1 + m2;
	ans.display();
}

/*
Enter first amount :
Enter ruppees : 17
Enter paise : 99

Enter second amount :
Enter ruppees : 35
Enter paise : 56

Total Money : 53 ruppees 55 paise
*/
