#include <iostream>
#include <cmath> // Include cmath header for sqrt function

using namespace std;

// Abstract class Shape
class Shape
{
public:
    // Abstract method to calculate area
    virtual double calculateArea() const = 0;

    // Abstract method to calculate perimeter
    virtual double calculatePerimeter() const = 0;

    // Virtual destructor (important for polymorphism)
    virtual ~Shape() {}
};

// Subclass Rectangle
class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override method to calculate area
    double calculateArea() const override
    {
        return length * width;
    }

    // Override method to calculate perimeter
    double calculatePerimeter() const override
    {
        return 2 * (length + width);
    }
};

// Subclass Circle
class Circle : public Shape
{
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Override method to calculate area
    double calculateArea() const override
    {
        return 3.14159 * radius * radius;
    }

    // Override method to calculate perimeter
    double calculatePerimeter() const override
    {
        return 2 * 3.14159 * radius;
    }
};

// Subclass Triangle
class Triangle : public Shape
{
private:
    double side1, side2, side3;

public:
    // Constructor
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    // Override method to calculate area (Heron's formula)
    double calculateArea() const override
    {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    // Override method to calculate perimeter
    double calculatePerimeter() const override
    {
        return side1 + side2 + side3;
    }
};

int main()
{
    // Prompt user for dimensions of rectangle
    double rectangleLength, rectangleWidth;
    cout << "Enter length and width of the rectangle: ";
    cin >> rectangleLength >> rectangleWidth;
    Rectangle rectangle(rectangleLength, rectangleWidth);

    // Prompt user for radius of circle
    double circleRadius;
    cout << "Enter radius of the circle: ";
    cin >> circleRadius;
    Circle circle(circleRadius);

    // Prompt user for sides of triangle
    double triangleSide1, triangleSide2, triangleSide3;
    cout << "Enter three sides of the triangle: ";
    cin >> triangleSide1 >> triangleSide2 >> triangleSide3;
    Triangle triangle(triangleSide1, triangleSide2, triangleSide3);

    // Display calculations
    cout << "Rectangle: Area = " << rectangle.calculateArea() << ", Perimeter = " << rectangle.calculatePerimeter() << endl;
    cout << "Circle: Area = " << circle.calculateArea() << ", Circumference = " << circle.calculatePerimeter() << endl;
    cout << "Triangle: Area = " << triangle.calculateArea() << ", Perimeter = " << triangle.calculatePerimeter() << endl;

    return 0;
}
