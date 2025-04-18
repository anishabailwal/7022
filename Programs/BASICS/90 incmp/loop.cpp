// 90. Write a C++ program to enter the numbers till the user wants and at the end the program should display the largest and smallest numbers entered

#include <iostream>

using namespace std;
int main() {
    int num1,num2;
    char ch;

        
    do {

        cout << "Enter a number: ";
        cin >> num1;
        cout << "Enter a number: ";
        cin >> num2;
        if (number > largest) {
            largest = number;
        }
        if (number < smallest) {
            smallest = number;
        }

        cout << "Do you want to enter another number? (y/n): ";
        cin >> ch
;
    } while (ch == 'y' || ch == 'Y');

    cout << "Largest number entered: " << largest << endl;
    cout << "Smallest number entered: " << smallest << endl;

    return 0;
}
