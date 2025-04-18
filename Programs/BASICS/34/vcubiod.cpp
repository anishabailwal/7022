// 34. C++ Program to find volume of cuboid

#include <iostream>
using namespace std;

double volume(double l, double w, double h)
{
    return l * w * h;
}

int main()
{
    double l, w, h;
    cout << "Enter the l of the cuboid: ";
    cin >> l;
    cout << "Enter the w of the cuboid: ";
    cin >> w;
    cout << "Enter the h of the cuboid: ";
    cin >> h;

    double v = volume(l, w, h);
    cout << "Volume of the cuboid: " << v << endl;

    return 0;
}
