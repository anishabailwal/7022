// 99. Write a C++ method to compute the sum of the digits in an integer

#include<iostream>

using namespace std;
void sum(int num)
{
    int s=0,temp;
    do
    {
        temp=num%10;
        s+=temp;
        num/=10;
    } while (num!= 0);
    cout<<"The sum of all the digits of the Number is "<<s;
}
int main()
{
    int a;
    cout<<"Enter the number :";
    cin>>a;
    sum(a);
    return 0;
}
