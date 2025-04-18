// 8. Define a class Time to represent time. Overload the << operator to display the time in HH:MM format.

#include <iostream>
using namespace std;

class Time
{
	int hour;
	int min;

public:
	void get()
	{
		cout << "Enter hour : ";
		cin >> hour;
		cout << "Enter minutes : ";
		cin >> min;
	}

	friend ostream &operator<<(ostream &os, const Time &t);
};

ostream &operator<<(ostream &os, const Time &t)
{
	os << "Entered time: " << t.hour << ":" << t.min;
	return os;
}

int main()
{
	Time t1;
	t1.get();
	cout << t1;
	return 0;
}
