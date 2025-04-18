// 102. Write a C++ method to find number is even number or not

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "The number is Even.";
    }
    else
        cout << "The number is not Even.";
    cout << "\n";

    return 0;
}