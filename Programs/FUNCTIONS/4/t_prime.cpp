// 4.Write a C++ method to find all twin prime numbers less than 100.

#include <iostream>
using namespace std;

void t_prime()
{
    int n, i, f;
    cout << "(";
    for (n = 3; n <= 100; n++)
    {
        f = 0;
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0 || (n + 2) % i == 0)
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
            cout << "(" << n << "," << n + 2 << ")";
    }
    cout << ")";
}

int main()
{
    cout << "The twin prime numbers till 100 are: ";
    t_prime();
    return 0;
}
