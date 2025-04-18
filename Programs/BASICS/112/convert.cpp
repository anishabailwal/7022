// 112. Write a C++ program to convert a float value to absolute value

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    float num;

    cout << "Enter a float value: ";
    cin >> num;

    float absvalue = fabs(num);

    cout << "Absolute value of " << num << " is: " << absvalue << endl;

    return 0;
}
