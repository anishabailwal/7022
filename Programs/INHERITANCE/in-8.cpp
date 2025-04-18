// 8. Write a C++ program to create a class called Shape with methods called getPerimeter() and getArea(). Create a derived class called Circle that overrides the getPerimeter() and getArea() methods to calculate the area and perimeter of a circle.

#include <iostream>
using namespace std;

class Shape
{
public:
    double getPerimeter()
    {
        return 0.0;
    }

    double getArea()
    {
        return 0.0;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getPerimeter()
    {
        return 2 * 3.14159 * radius;
    }

    double getArea()
    {
        return 3.14159 * radius * radius;
    }
};

int main()
{
    double r;
    cout<<"Enter the radius of the circle :";
    cin>>r;
    Circle circle(r);

    cout << "Perimeter of the circle: " << circle.getPerimeter() << endl;
    cout << "Area of the circle: " << circle.getArea() << endl;

    return 0;
}
// ----- OUTPUT -----
// Enter the radius of the circle :7
// Perimeter of the circle: 43.9823
// Area of the circle: 153.938     