// 11. Write a C++ program to compare two numbers
#include <iostream>

using namespace std;
void com(int num1, int num2)
{
    if (num1 == num2)
    {
        cout << "Both numbers are equal." << endl;
    }
    else if (num1 > num2)
    {
        cout << num1 << " is greater than " << num2 << endl;
    }
    else
    {
        cout << num2 << " is greater than " << num1 << endl;
    }
}
int main()
{
    int a, b;
    cout << "Enter the first number :";
    cin >> a;
    cout << "Enter the second number :";
    cin >> b;
    com(a, b);
    return 0;
}
