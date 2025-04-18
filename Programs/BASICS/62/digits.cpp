// 62. Write a C++ program that reads an positive integer and count the number of digits

#include <iostream>
using namespace std;

int main()
{
    int num;
    int count = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    int temp = num;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }

    cout << "Number of digits in " << num << " is: " << count << endl;

    return 0;
}
