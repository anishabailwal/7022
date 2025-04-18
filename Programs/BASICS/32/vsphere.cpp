// 32. C++ Program to find volume of sphere

#include <iostream>
using namespace std;

double volume(double r)
{
    double v;
    v = (4.0 / 3.0) * 3.14 * (r * r * r);
    return v;
}

int main()
{
    double r;
    cout<<"Enter the radius of the sphere in cm :"
    cin>>r;
    cout << "Volume of a sphere with radius  is " << volume(r) << " cm^3" << endl;
    return 0;
}
