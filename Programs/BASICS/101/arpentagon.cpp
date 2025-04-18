// 101. Write a C++ method to find the area of a pentagon

#include <iostream>
#include<iomanip>
#include <cmath>

using namespace std;
float pentagonarea(float side) 
{
    float area = 0.250 * pow(side,2)*sqrt(5*(5+2*sqrt(5)));
    return area;
}

int main() {
    float side;

    cout << "Enter the length of a side of the pentagon: ";
    cin >> side;

    float area = pentagonarea(side);
    cout << "Area of the pentagon: " <<setprecision(5)<<area << endl;

    return 0;
}
