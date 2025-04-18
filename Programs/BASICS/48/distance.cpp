#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double x2, double y1, double y2)
{
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(dx * dx + dy * dy);
}

int main()
{
    double x1, x2, y1, y2;

    cout << "Enter coordinates of the first point (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of the second point (x2 y2): ";
    cin >> x2 >> y2;

    double d = distance(x1, x2, y1, y2);
    cout << "Distance between the two points: " << d<< endl;

    return 0;
}
