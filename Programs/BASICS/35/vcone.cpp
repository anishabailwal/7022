// 35. C++ Program to find volume of cone

#include <iostream>
#include <cmath>
using namespace std;

double volume(double r, double h)
{
    return 3.14 * r * r * h / 3.0;
}

int main()
{
    double r, h;

    cout << "Enter the radius of the cone: ";
    cin >> r;
    cout << "Enter the height of the cone: ";
    cin >> h;

    double v = volume(r, h);
    cout << "Volume of the cone: " << v << endl;

    return 0;
}
