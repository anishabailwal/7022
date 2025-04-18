#include <iostream>

using namespace std;

class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle(double w, double h)
    {
        width = w;
        height = h;
    }

    double calculateArea()
    {
        return width * height;
    }

    double calculatePerimeter()
    {
        return 2 * (width + height);
    }
};

int main()
{
    Rectangle rect(5.0, 4.0);

    double area = rect.calculateArea();
    double perimeter = rect.calculatePerimeter();

    cout << "Rectangle Area: " << area << endl;
    cout << "Rectangle Perimeter: " << perimeter << endl;

    return 0;
}
