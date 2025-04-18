// 89. Write a C++ program to enter the numbers till the user wants and at the end it should display the count of positive, negative and zeros

#include <iostream>

using namespace std;
int main() 
{
    int num;
    int pos = 0, neg = 0, zero = 0;
    char choice;

    do {
        cout << "Enter a number: ";
        cin >> num;

        if (num > 0) {
            pos++;
        } else if (num < 0) {
            neg++;
        } else {
            zero++;
        }

        cout << "Do you want to enter another number? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Positive numbers: " << pos << endl;
    cout << "Negative numbers: " << neg << endl;
    cout << "Zeros: " << zero << endl;

    return 0;
}
