// 1. Write a C++ method to find the smallest number among three numbers

#include <iostream>
using namespace std;
int smallest(int num1, int num2, int num3)
{
    int s = num1;

    if (num2 < s)
    {
        s = num2;
    }

    if (num3 < s)
    {
        s = num3;
    }

    return s;
}

int main()
{
    int num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    int s = smallest(num1, num2, num3);

    cout << "The smallest number is: " << s << endl;

    return 0;
}
