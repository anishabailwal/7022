// 24. Write a C++ program to add all the digits of a given positive integer
#include <iostream>
using namespace std;

int digitsum(int n)
{
    int sum = 0;

    while (n != 0)
    {
        int temp = n % 10;
        sum += temp;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;

    cout << "The SUM of all the digits of " << n << " is " << digitsum(n);

    return 0;
}