#include <iostream>

using namespace std;

class Circle
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    double getRadius()
    {
        return radius;
    }

    void setRadius(double r)
    {
        radius = r;
    }

    double calculateArea()
    {
        return 3.14159 * radius * radius;
    }

    double calculateCircumference()
    {
        return 2 * 3.14159 * radius;
    }
};

int main()
{
    Circle circle(5.0);

    cout << "Initial Radius: " << circle.getRadius() << endl;
    circle.setRadius(7.0);
    cout << "Modified Radius: " << circle.getRadius() << endl;

    double area = circle.calculateArea();
    double circumference = circle.calculateCircumference();

    cout << "Circle Area: " << area << endl;
    cout << "Circle Circumference: " << circumference << endl;

    return 0;
}
