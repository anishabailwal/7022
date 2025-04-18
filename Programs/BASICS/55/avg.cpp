// 55. Write a C++ program to input 5 numbers from keyboard and find their sum and average

#include <iostream>
using namespace std;

int main()
{
    float a, sum = 0, n;
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter the " << i + 1 << " number " << ":";
        cin >> a;
        sum += a;
    }
    cout << "The average of the number you Entered is :" << sum / 5;
    return 0;
}
