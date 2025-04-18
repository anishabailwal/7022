// 19. Write a C++ program to convert seconds to hour, minute and seconds

#include<iostream>
using namespace std;
int main()
{
    int time,h,m,s;
    cout<<"\nEnter the time in seconds : ";
    cin>>time;
    h=time/3600;
    s=time%3600;
    m=s/60;
    s=s/60;
    cout<<"Hours:"<<h<<" Minutes:"<<m<<" Seconds:"<<s<<"\n";

    return 0;
}