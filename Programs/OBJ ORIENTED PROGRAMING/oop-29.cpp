#include <iostream>
#include <cmath>

class Circle
{
private:
    double radius;

public:
    // Constructor
    Circle(double r)
    {
        radius = r;
    }

    // Getter method for radius
    double getRadius() const
    {
        return radius;
    }

    // Setter method for radius
    void setRadius(double r)
    {
        radius = r;
    }

    // Method to calculate area
    double calculateArea() const
    {
        return M_PI * radius * radius;
    }

    // Method to calculate perimeter (circumference)
    double calculatePerimeter() const
    {
        return 2 * M_PI * radius;
    }
};

int main()
{
    double userRadius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> userRadius;

    // Creating a Circle object with user input radius
    Circle circle(userRadius);

    // Getting and printing the radius
    std::cout << "Radius: " << circle.getRadius() << std::endl;

    // Calculating and printing the area
    std::cout << "Area: " << circle.calculateArea() << std::endl;

    // Calculating and printing the perimeter
    std::cout << "Perimeter: " << circle.calculatePerimeter() << std::endl;

    // Prompting the user to edit the radius
    std::cout << "\nEnter a new radius for the circle: ";
    std::cin >> userRadius;

    // Setting the new radius
    circle.setRadius(userRadius);

    // Getting and printing the new radius
    std::cout << "New Radius: " << circle.getRadius() << std::endl;

    // Calculating and printing the new area
    std::cout << "New Area: " << circle.calculateArea() << std::endl;

    // Calculating and printing the new perimeter
    std::cout << "New Perimeter: " << circle.calculatePerimeter() << std::endl;

    return 0;
}
