// 36. C++ program to find surface area of cuboid

#include <iostream>
using namespace std;

double area(double l, double w, double h)
{
    return 2 * (l * w + l * h + w * h);
}

int main()
{
    double l, w, h;

    cout << "Enter the length of the cuboid: ";
    cin >> l;
    cout << "Enter the width of the cuboid: ";
    cin >> w;
    cout << "Enter the height of the cuboid: ";
    cin >> h;

    double sr_area = area(l, w, h);
    cout << "Surface area of the cuboid: " << sr_area << endl;

    return 0;
}
