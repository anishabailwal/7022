// 3. Write a C++ program to create a class called Shape with a method called getArea(). Create a derived class called Rectangle that overrides the getArea() method to calculate the area of a rectangle.

#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

class Shape
{
public:
    double getArea()
    {
        return 0.0;
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double getArea()
    {
        return length * width;
    }
};

int main()
{
    double l,w;
    cout<<"Enter the length of the rectangle :";
    cin>>l;
    cout<<"Enter the width of the rectangle :";
    cin>>w;
    Rectangle rect(l, w);

    cout << "Area of the rectangle: " << rect.getArea() << endl;

    return 0;
}

// ----- OUTPUT -----
// Enter the length of the rectangle :12
// Enter the width of the rectangle :12
// Area of the rectangle: 144  