// 87. Write a C++ program to check whether the number is a prime number or not

#include<iostream>

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
    int num;
    cout<<"Enter a number :";
    cin>>num;
    if (isPrime(num))
        cout<< "The number is prime.";
    else
        cout<<"The number is not prime.";

    return 0;
}