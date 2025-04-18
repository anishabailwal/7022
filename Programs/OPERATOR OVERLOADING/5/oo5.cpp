// 5. Define a class Date to represent dates. Overload the < operator to compare two dates.
#include <iostream>
using namespace std;

class Date
{
	int day;
	int month;
	int year;

public:
	void get()
	{
		cout << "Enter day : ";
		cin >> day;
		cout << "Enter month : ";
		cin >> month;
		cout << "Enter year : ";
		cin >> year;
	}
	void display()
	{
		cout << endl
			 << "\nEntered Date : " << day << "-" << month << "-" << year;
	}
	int operator<(Date d)
	{
		if (year >= d.year)
		{
			if (year == d.year)
			{
				if (month >= d.month)
				{
					if (month == d.month)
					{
						if (day > d.day)
						{
							return 0;
						}
						else
						{
							return 1;
						}
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
};

int main()
{
	Date d1, d2;
	d1.get();
	d2.get();
	d1.display();
	d2.display();
	int ans = d1 < d2;
	if (ans == 1)
	{
		cout << endl;
		d1.display();
		cout << endl
			 << " is less than ";
		d2.display();
	}
	else
	{
		d1.display();
		cout << endl
			 << "is not less than ";
		d2.display();
	}
}
