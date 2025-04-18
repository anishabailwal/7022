// 5. Write a C++ program that takes five numbers as input to calculate and print the average of the numbers
#include<iostream>
using namespace std;

int main()
{
    float a,sum=0,n;
    cout<<"Enter the Number of times u want to give input :";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the number "<<i+1<<":";
        cin>>a;
        sum+=a;
    }
    cout<<"The average of the number you Entered is :"<<sum/n;
    return 0;
}
