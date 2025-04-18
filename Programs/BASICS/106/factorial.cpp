// 106. Write a C++ method to find factorial using recursion

#include <iostream>

using namespace std;

long long factorial(int n) 
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() 
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    long long fact = factorial(num);
    cout << "Factorial of " << num << " is: " << fact << endl;

    return 0;
}
