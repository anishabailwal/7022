// 108. Write a C++ program to round a float num to specified decimals


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
float rounddec(float num, int dec) {
    float roundedNum = round(num * pow(10, dec)) / pow(10, dec);
    return roundedNum;
}

int main() {
    float num;
    int dec;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter the number of decimals to round to: ";
    cin >> dec;

    float roundednumber = rounddec(num, dec);

    cout << "Original number: " << num << endl;
    cout << "Rounded to " << dec << " decimal places: "<< setprecision(dec) << roundednumber << endl;

    return 0;
}

