// 85. Write a C++ program that prompts the user to input an integer and then outputs the number with the digits reversed order

#include <iostream>
using namespace std;

int main() {
    int num, rev = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        int temp = num % 10;
        rev = rev * 10 + temp;
        num /= 10;
    }

    cout << "Number with digits reversed: " << rev << endl;

    return 0;
}
