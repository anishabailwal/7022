// 27. C++ Program to find area of equilateral triangle
#include<iostream>
using namespace std;

float area(float a)
{
    return 0.433*a*a;
}
int main()
{
    float a;
    cout<<"Enter the sides of the triangle(in cms) :";
    cin>>a;
    cout<<"The area of the equiateral triangle with side "<< a <<" is "<<area(a)<<" cm^2.";
    return 0;
}