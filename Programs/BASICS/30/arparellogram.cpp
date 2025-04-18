// 30. C++ Program to find area of parallelogram

#include<iostream>
using namespace std;

float area(float a,float b)
{
    return a*b;
}
int main()
{
    float a,b;
    cout<<"Enter the heigth of the parallelogram(in cms) :";
    cin>>a;
    cout<<"Enter the base of the parallelogram(in cms) :";
    cin>>b;
    cout<<"The area of the parallelogram with "<< a <<" and "<<b <<" respectively is "<<area(a,b)<<" cm^2.";
    return 0;
}