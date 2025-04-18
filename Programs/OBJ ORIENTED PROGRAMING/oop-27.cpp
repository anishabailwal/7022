#include <iostream>

using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    // Setter methods
    void setLength(double _length)
    {
        length = _length;
    }

    void setWidth(double _width)
    {
        width = _width;
    }

    // Getter methods
    double getLength() const
    {
        return length;
    }

    double getWidth() const
    {
        return width;
    }
};

int main()
{
    // Create a Rectangle object
    Rectangle rect;

    // Get input from user for rectangle dimensions
    double length, width;

    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    // Set rectangle dimensions using setter methods
    rect.setLength(length);
    rect.setWidth(width);

    // Display rectangle dimensions using getter methods
    cout << "\nRectangle Dimensions:" << endl;
    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;

    // Ask user if they want to modify dimensions
    char choice;
    cout << "\nDo you want to modify the dimensions? (Y/N): ";
    cin >> choice;

    if (choice == 'Y' || choice == 'y')
    {
        double newLength, newWidth;

        // Modify length
        cout << "Enter new length: ";
        cin >> newLength;
        rect.setLength(newLength);

        // Modify width
        cout << "Enter new width: ";
        cin >> newWidth;
        rect.setWidth(newWidth);

        // Display modified rectangle dimensions
        cout << "\nModified Rectangle Dimensions:" << endl;
        cout << "Length: " << rect.getLength() << endl;
        cout << "Width: " << rect.getWidth() << endl;
    }
    else
    {
        cout << "Thank you!" << endl;
    }

    return 0;
}
