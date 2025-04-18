// 86. Write a C++ program that reads a set of integers, and then prints the sum of the even and odd integers using loop

#include <iostream>
using namespace std;
int main() {
    int num;
    int esum = 0, osum = 0;
    char ch;

    do {
        cout << "Enter an integer: ";
        cin >> num;

        if (num % 2 == 0) {
            esum += num;
        } else {
            osum += num;
        }

        cout << "Do you want to enter another integer? (y/n): ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');

    cout << "Sum of even integers: " << esum << endl;
    cout << "Sum of odd integers: " << osum << endl;

    return 0;
}
