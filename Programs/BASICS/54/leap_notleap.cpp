// 54. Write a C++ program that takes a year from user and print whether that year is a leap year or not


#include <iostream>
using namespace std;
bool leap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    else
        return false;
}

int main() 
{
    int year;

    cout << "Enter the year : ";
    cin >> year;

    if (leap(year))
        cout << year << " is a leap year." << endl;
    else
        cout << year << " is not a leap year." << endl;

    return 0;
}
