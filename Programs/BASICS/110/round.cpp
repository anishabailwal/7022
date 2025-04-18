// 111. Write a C++ program to convert Roman number to an integer number


#include <iostream>
#include <cmath>

using namespace std;
int roundof(int numerator, int denominator)
{
    int result = numerator/denominator;
    if (numerator%denominator != 0)
    {
        result++;
    }
    return result;
}
int main() 
{
    float numerator,denominator;

    cout << "Enter the numerator: ";
    cin >> numerator;
    cout << "Enter the number to be divided: ";
    cin >> denominator;

    int result = roundof(numerator,denominator);

    cout << "Result of the division rounded up :"<<result << endl;

    return 0;
}
