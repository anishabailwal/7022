// 26. C++ Program to find area of rectangle
#include<iostream>
using namespace std;

float area(float l,float b)
{
    return l*b;
}
int main()
{
    float l,b;
    cout<<"Enter the length of the rectangle :";
    cin>>l;
    cout<<"Enter the breadth of the rectangle :";
    cin>>b;
    cout<<"The area of the rectangle with length and breadth "<< l <<" and "<< b << " respectively is "<<area(l,b);
    return 0;
}