// 93. Write a C++ program to print Fibonacci series of n terms where n is input by user using loop

#include <iostream>
using namespace std;

int main() 
{
    int n;
    int a = 0, b = 1, c;

    cout << "Enter the number of terms to be in the Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci Series :" << endl;

    for (int i = 0; i < n; ++i) 
    {
        if (i <= 1)
        {
            c = i;
        }
        else 
        {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << ",";
    }

    cout << endl;

    return 0;
}
