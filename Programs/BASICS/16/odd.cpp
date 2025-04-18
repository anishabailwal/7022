// 16. Write a C++ program to print the odd numbers from 1 to 20
#include<iostream>
using namespace std;
int main()
{
    cout<<"\nODD NUMBERS FROM 1 TO 20 :";
    for (int i = 1; i <= 20; i++)
    {
    if (i%2!=0)
    {
        cout<<i<<",";       
    }
    }
    cout<<"\n";
    return 0;
}
