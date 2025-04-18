// 29. C++ Program to find area of rhombus
#include<iostream>
using namespace std;

float area(float a,float b)
{
    return 0.5*a*b;
}
int main()
{
    float a,b;
    cout<<"Enter the first Diagonal of the rhombus(in cms) :";
    cin>>a;
    cout<<"Enter the second Diagonal of the rhombus(in cms) :";
    cin>>b;
    cout<<"The area of the rhombus with Diagonal "<< a <<" and "<<b <<" is "<<area(a,b)<<" cm^2.";
    return 0;
}