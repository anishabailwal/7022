// 33. C++ Program to find volume of cylinder

#include <iostream>
using namespace std;
double volume(double r, double h)
{
    double v;
    v = 3.14 * (r * r) * h;
    return v;
}

int main()
{
    double r, h;
    cout << "Enter the radius of the cylinder in cm :";
    cin >> r;
    cout << "Enter the height of the cylinder in cm :";
    cin >> h;
    cout << "Volume of a cylinder with radius " << r << "and height " << h << " is " << volume(r, h) << " cm^3" << endl;
    return 0;
}
