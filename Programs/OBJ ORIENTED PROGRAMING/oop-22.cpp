#include <iostream>

using namespace std;

class Number
{
private:
    int value;

public:
    // Constructor
    Number(int _value) : value(_value) {}

    // Copy constructor
    Number(const Number &other)
    {
        value = other.value;
    }

    // Method to display the value
    void displayValue() const
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    // Create a Number object
    Number num1(10);

    // Display value of num1
    cout << "Number 1:" << endl;
    num1.displayValue();

    // Create a copy of num1 using copy constructor
    Number num2 = num1;

    // Display value of num2
    cout << "\nNumber 2 (Copy of Number 1):" << endl;
    num2.displayValue();

    return 0;
}
