// 22. Write a C++ program to check if a positive number is a palindrome or not

#include <iostream>

using namespace std;

bool ispalindrome(int num)
{
    int orgnum = num, revnum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        revnum = revnum * 10 + digit;
        num /= 10;
    }
    if (revnum == orgnum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout << "Enter a number (*It should be positive) :";
    cin >> n;

    if (n < 0)
    {
        cout << "Please Enter a positve number. " << endl;
    }
    if (ispalindrome(n))
    {
        cout << n << " is a palindrome. " << endl;
    }
    else
    {
        cout << n << " is not a palindrome." << endl;
    }

    return 0;
}