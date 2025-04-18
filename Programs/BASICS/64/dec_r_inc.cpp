// 64. Write a C++ program that accepts three numbers from the user and check if numbers are in "increasing” or “decreasing” order.

#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3;

    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    cout << "Enter 3rd number: ";
    cin >> num3;

    if (num1 < num2 && num2 < num3)
    {
        cout << "The numbers are in increasing order." << endl;
    }
    else if (num1 > num2 && num2 > num3)
    {
        cout << "The numbers are in decreasing order." << endl;
    }
    else
    {
        cout << "The numbers are neither in increasing nor decreasing order." << endl;
    }

    return 0;
}
