/* 11. Write a C++ program to create an abstract class Shape2D with abstract methods draw() and resize(). 
Create derived classes Rectangle and Circle that extend the Shape2D class and implement the respective methods 
to draw and resize each shape. */

#include <iostream>
using namespace std;

class Shape2D {
public:
    virtual void draw() = 0;
    virtual void resize() = 0;
};

class Rectangle : public Shape2D {
public:
    void draw() {
        cout << "drawing RECTANGLE" << endl;
    }

    void resize() {
        cout << " changing size of  rectangle" << endl;
    }
};

class Circle : public Shape2D {
public:
    void draw() {
        cout << "drawing CIRCLE" << endl;
    }

    void resize() {
        cout << "changing size of  circle" << endl;
    }
};

int main() {
    
    Rectangle obj;
    Circle obj1;

    cout << "Rectangle operations:" << endl;
    obj.draw();
    obj.resize();

    cout << "\nCircle operations:" << endl;
    obj1.draw();
    obj1.resize();

    return 0;
}

/* Output :

Rectangle operations:
drawing RECTANGLE
changing size of  rectangle

Circle operations:
drawing CIRCLE
changing size of  circle

*/