// 100. Write a C++ method to calculate the area of a triangle

#include <iostream>
#include <cmath>
using namespace std;
float areatriangle(float a, float b, float c)
{
    float s = (a + b + c) / 2.0;

    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

int main()
{
    float side1, side2, side3;

    cout << "Enter the length of the first side of the triangle: ";
    cin >> side1;
    cout <<"Enter the length of the second side of the triangle: ";
    cin >> side2;
    cout << "Enter the length of the third side of the triangle: ";
    cin >> side3;

    if (side1 <= 0 || side2 <= 0 || side3 <= 0 || side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1)
    {
        cout << "Invalid triangle. Please enter valid side lengths." << endl;
        return 1;
    }
    float area = areatriangle(side1, side2, side3);
    cout << "Area of the triangle: " << area << endl;

    return 0;
}
