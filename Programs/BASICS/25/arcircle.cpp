// 25. C++ program to find area of circle
#include<iostream>
using namespace std;

float area(float r)
{
    float pi = 3.14;
    return pi*r*r;
}
int main()
{
    float r;
    cout<<"Enter the radius of the circle whose area is to be calculated :";
    cin>>r;
    cout<<"The area of the circle with radius "<< r <<" is "<<area(r);
    return 0;
}