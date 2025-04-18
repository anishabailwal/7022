// 6. Write a C++ program to swap two variables
#include<iostream>
using namespace std;

int swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"\nFirst number after swapping :"<<a;
    cout<<"\nSecond number after swapping :"<<b;
}
int main()
{
    int a,b;
    cout<<"Enter the first number :";
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;
    swap(a,b);
    return 0;
}
