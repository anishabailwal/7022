// 37. C++ program to find surface area of cylinder

#include <iostream>
#include <cmath>
using namespace std;

double area(double r, double h)
{
    return 2 * 3.14 * r * (r + h);
}

int main()
{
    double r, h;

    cout << "Enter the radius of the cylinder: ";
    cin >> r;
    cout << "Enter the height of the cylinder: ";
    cin >> h;

    double sr_area = area(r, h);
    cout << "Surface area of the cylinder: " << sr_area << endl;

    return 0;
}
