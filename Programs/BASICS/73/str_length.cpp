// 73. Write a C++ program to get the length of a given string

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);
    
    cout << "Length of the string: " << str.length() << endl;

    return 0;
}
