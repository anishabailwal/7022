// 104. Write a C++ method to displays prime numbers between 1 to 20

#include <iostream>

using namespace std;
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    cout << "Prime numbers between 1 and 20 are:" << endl;
    for (int i = 2; i <= 20; ++i)
    {
        if (isPrime(i))
            cout << i << ",";
    }
    cout << endl;

    return 0;
}
