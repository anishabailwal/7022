// 105. Write a C++ method to find GCD and LCM of Two Numbers

#include <iostream>

using namespace std;

int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) 
{
    return (a * b) / gcd(a, b);
}

int main() 
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate GCD
    int gcdResult = gcd(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcdResult << endl;

    // Calculate LCM
    int lcmResult = lcm(num1, num2);
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcmResult << endl;

    return 0;
}
