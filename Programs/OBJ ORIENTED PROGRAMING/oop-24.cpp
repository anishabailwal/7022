#include <iostream>

using namespace std;

class Shape {
public:
    // Method to calculate the area of a circle
    double area(double radius) {
        return 3.14 * radius * radius;
    }

    // Method to calculate the area of a rectangle
    double area(double length, double width) {
        return length * width;
    }
};

int main() {
    Shape shape;

    // Calculate area of a circle with radius 5
    double circleArea = shape.area(5.0);
    cout << "Area of circle with radius 5: " << circleArea << endl;

    // Calculate area of a rectangle with length 4 and width 3
    double rectangleArea = shape.area(4.0, 3.0);
    cout << "Area of rectangle with length 4 and width 3: " << rectangleArea << endl;

    return 0;
}
