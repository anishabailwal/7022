// 13. Write a C++ program to print the ascii value of a given character
#include <iostream>
using namespace std;

int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;

    int ascii = int(character);

    cout << "ASCII value of " << character << " is : " << ascii << endl;

    return 0;
}

