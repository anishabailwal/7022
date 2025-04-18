// 49. C++ Program To Calculate Power Of Number

#include <iostream>
#include<cmath>

using namespace std;
int main()
{
    int base,power;
    cout << "Enter the base :";
    cin >> base;
    cout << "Enter the power :";
    cin >> power;

    cout<<base<<"^"<<power<<" is "<<pow(base,power)<<endl;
    return 0;
}
