// 98. Write a C++ program to accept a float value of number and return a rounded float value

#include <iostream>
#include <cmath>
using namespace std;
float roundfloat(float num) {
    return round(num);
}

int main() {
    float num;

    cout << "Enter a float number: ";
    cin >> num;

    float roundedNumber = roundfloat(num);

    cout << "Original value: " << num << endl;
    cout << "Rounded value: " << roundedNumber << endl;

    return 0;
}
