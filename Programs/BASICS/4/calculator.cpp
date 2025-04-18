// 4. Write a C++ program to print the sum, multiply, subtract, divide and remainder of two numbers
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float a,b;
    cout<<"Enter the first number :";
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;
    cout<<"\nThe SUM of the two numbers :"<<a+b;
    cout<<"\nThe PRODUCT of the two numbers :"<<a*b;
    cout<<"\nThe DIFFERENCE between two numbers :"<<a-b;
    cout<<"\nThe DIVISION of the two numbers :"<<setprecision(2)<<a/b;
    cout<<"\nThe REMAINDER of the two numbers :"<<int(a)%int(b);
    return 0;
}
