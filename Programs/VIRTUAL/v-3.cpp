/* 3. Write a C++ program to create an abstract class Shape with abstract methods calculateArea() 
and calculatePerimeter(). Create derived classes Circle and Triangle that extend the Shape class and 
implement the respective methods to calculate the area and perimeter of each shape.*/


#include <iostream>
using namespace std;

class Shape {

public:

virtual void calculateArea()  = 0;
virtual void calculatePerimeter()  = 0;

};


class Circle : public Shape {

public:

void calculateArea () {
        float r;
        cout<<"Calculate Area"  <<endl;
        cout<<"Enter  radius of the circle : " ;
        cin>>r;
        cout<<"area of cicle is : " <<r*r*3.14<<endl;

    };
    void calculatePerimeter () {
        cout<<"Calculate perimeter"<<endl;
        float r;
        cout<<"Enter  radius of the circle : " ;
        cin>>r;
        cout<<"Perimeter of cicle is : " <<2*r*3.14;
    }

};
class Triangle : public Shape {

public:

void calculateArea () override{
        float h,b;
        cout<<"Calculate Area"  <<endl;
        cout<<"Enter  base of the Triangle : " ;
        cin>>b;
        cout<<"Enter  height of the Triangle : " ;
        cin>>h;
        cout<<"area of Triangle is : " <<b*h*0.5<<endl;

    };
    void calculatePerimeter () override{
        cout<<"Calculate perimeter"<<endl;
        float a,b,c;
        cout<<"Enter  side 1 of the circle : " ;
        cin>>a;
        cout<<"Enter  side 2 of the circle : " ;
        cin>>b;
        cout<<"Enter  side 3 of the circle : " ;
        cin>>c;
        cout<<"Perimeter of Triangle is : " << a+b+c;
    }

};


int main() {


    Circle obj1;
    obj1.calculateArea();
    obj1.calculatePerimeter();

    Triangle obj;
    obj.calculateArea();
    obj.calculatePerimeter();

    return 0;
}



/*
Output :- 

Calculate Area
Enter  radius of the circle : 23
area of cicle is : 1661.06
Calculate perimeter
Enter  radius of the circle : 21
Perimeter of cicle is : 131.88Calculate Area
Enter  base of the Triangle : 23
Enter  height of the Triangle : 43
area of Triangle is : 494.5
Calculate perimeter
Enter  side 1 of the circle : 45
Enter  side 2 of the circle : 65
Enter  side 3 of the circle : 75
Perimeter of Triangle is : 185

*/


