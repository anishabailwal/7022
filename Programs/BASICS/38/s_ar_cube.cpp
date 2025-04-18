// 38. C++ program to find surface area of cube


#include <iostream>
using namespace std;

double area(double a)
{
    return 6 *a*a;
}

int main()
{
    double a;

    cout << "Enter the side of the cube: ";
    cin >> a;
    
    double sr_area = area(a);
    cout << "Surface area of the cube: " << sr_area << endl;

    return 0;
}
