// 20. Write a C++ program to compute the sum of the first 100 prime numbers

#include <iostream>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n <= 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int sumprimes(int n)
{
    int sum = 0;
    int count = 0;
    int num = 2;

    while (count < n)
    {
        if (isPrime(num))
        {
            sum += num;
            count++;
        }
        num++;
    }
    return sum;
}

int main()
{
    int n = 100;
    int sum = sumprimes(n);
    cout << "Sum of the first " << n << " prime numbers: " << sum << endl;
    return 0;
}
