// 50. Write a C++ program to take three numbers from the user and print the greatest number

#include <iostream>

using namespace std;
void com(int num1, int num2, int num3)
{
    if (num1 == num2 == num3)
    {
        cout << "Both numbers are equal." << endl;
    }
    else if (num1 > num2 && num1 > num3)
    {
        cout << num1 << " is greatest of them all. " << endl;
    }
    else if (num2 > num3 && num2 > num1)
    {
        cout << num2 << " is greatest of them all. " << endl;
    }
    else
    {
        cout << num3 << " is greatest of them all. " << endl;
    }
}
int main()
{
    int a, b, c;
    cout << "Enter the first number :";
    cin >> a;
    cout << "Enter the second number :";
    cin >> b;
    cout << "Enter the third number :";
    cin >> c;
    com(a, b, c);
    return 0;
}
