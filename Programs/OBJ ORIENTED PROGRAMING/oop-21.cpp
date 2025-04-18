#include <iostream>

using namespace std;

class Rectangle
{
private:
    double width;
    double height;

public:
    // Parameterized constructor
    Rectangle(double _width, double _height) : width(_width), height(_height) {}

    // Method to calculate the area of the rectangle
    double area() const
    {
        return width * height;
    }

    // Method to calculate the perimeter of the rectangle
    double perimeter() const
    {
        return 2 * (width + height);
    }

    // Method to display details of the rectangle
    void displayDetails() const
    {
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

int main()
{
    // Create a Rectangle object using parameterized constructor
    Rectangle rectangle1(5.0, 3.0);

    // Display details of the rectangle
    cout << "Rectangle 1 Details:" << endl;
    rectangle1.displayDetails();

    return 0;
}
