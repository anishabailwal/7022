// 107. Write a C++ program to reverse an integer number

#include <iostream>

using namespace std;

int rev(int num) 
{
    int rev = 0;

    while (num != 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    return rev;
}

int main() {
    int num;

    cout << "Enter an integer number: ";
    cin >> num;

    int revnum = rev(num);

    cout << "Reversed number: " << revnum << endl;

    return 0;
}
