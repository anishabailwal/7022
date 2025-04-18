// 63. Write a C++ program that accepts three numbers and check All numbers are equal or not

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

    if (num1 == num2 && num2 == num3)
    {
        cout << "All numbers are equal." << endl;
    }
    else
    {
        cout << "Not all numbers are equal." << endl;
    }
    return 0;
}