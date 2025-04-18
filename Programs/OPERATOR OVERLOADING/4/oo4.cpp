// 4. Implement a class String to represent strings. Overload the + operator to concatenate two strings.
#include <iostream>
#include <string>

using namespace std;

class String
{
	string str;

public:
	void get()
	{
		cout << "Enter a string : ";
		getline(cin,str);
	}
	void display()
	{
		cout << endl
			 << "Entered String : " << str;
	}

	String operator+(const String &s)
	{
		String result;
		result.str = str + s.str;
		return result;
	}
};

int main()
{
	String s1, s2;
	s1.get();
	s2.get();
	s1.display();
	s2.display();

	String concatenated = s1 + s2;
	cout << "\nConcatenated String: ";
	concatenated.display();

	return 0;
}
/*
Enter a string : hi how are you.
Enter a string : my name is Gurdeep

Entered String : hi how are you.
Entered String : my name is Gurdeep
hi how are you.my name is Gurdeep
*/