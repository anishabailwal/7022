// 7. Create a class Rectangle to represent rectangles. Overload the == operator to check if two rectangles are equal.
#include <iostream>
using namespace std;

class Rectangle
{
	int length;
	int width;

public:
	void get();
	void display();
	int operator==(Rectangle);
};

void Rectangle::get()
{
	cout << endl
		 << "Enter Length : ";
	cin >> length;
	cout << "Enter Width : ";
	cin >> width;
}

void Rectangle::display()
{
	cout << endl
		 << "Length of Reactangle : " << length;
	cout << endl
		 << "Width of Rectangle : " << width;
}

int Rectangle::operator==(Rectangle r)
{
	if (length == r.length && width == r.width)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	Rectangle r1, r2;
	cout << "Enter Dimensions of First Rectangle : ";
	r1.get();
	cout << endl
		 << "Enter Dimensions of Second Rectangle : ";
	r2.get();
	int ans = (r1 == r2);
	if (ans == 1)
	{
		cout << endl
			 << "Enter Rectangles are Equal!";
	}
	else
	{
		cout << endl
			 << "Entered Rectangles are not Equal!";
	}
}

/*
Enter Dimensions of First Rectangle :
Enter Length : 17
Enter Width : 19

Enter Dimensions of Second Rectangle :
Enter Length : 17
Enter Width : 19

Enter Rectangles are Equal!
*/
