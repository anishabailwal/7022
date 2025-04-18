/* 12. Write a C++ program to create an abstract class GeometricShape with abstract 
methods area() and perimeter(). Create derived classes Triangle and Square that extend the 
GeometricShape class and implement the respective methods to calculate the area and perimeter of each shape */

#include <iostream>
using namespace std;

class GeometricShape {
public:
    virtual void area() = 0;
    virtual void perimeter() = 0;
};

class Square : public GeometricShape {
private:
    int side;

public:
    void getSide(){
        cout << "Enter Side : ";
        cin >> side;
    }

    void area() {
        getSide();
        cout << "Area is : " << side * side << endl;
    }

    void perimeter() {
        getSide();
        cout << "Perimeter is : " << 4 * side << endl;
    }
};

class Triangle : public GeometricShape {
public:
    void area() {
        int b, h;
        cout << "Enter base : ";
        cin >> b;
        cout << "Enter height : ";
        cin >> h;
        cout << "Area is : " << (0.5) * b * h << endl;
    }

    void perimeter() {
        int a, b, c;
        cout << "Enter sides : ";
        cin >> a >> b >> c;
        cout << "Perimeter is : " << a + b + c << endl;
    }
};

int main()
{
    Square square;
    Triangle triangle;

    cout << "Square:" << endl;
    square.area();
    square.perimeter();

    cout << "\nTriangle:" << endl;
    triangle.area();
    triangle.perimeter();

    return 0;
}

/* Output :

Square:
Enter Side : 23
Area is : 529
Enter Side : 21
Perimeter is : 84

Triangle:
Enter base : 56
Enter height : 2
Area is : 56
Enter sides : 14 56 67
Perimeter is : 137


 */