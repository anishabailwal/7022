// 77. Write a C++ program to reverse a String

#include <iostream>
#include <string>
using namespace std;

string rev(const string& str) {
    string revstr = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        revstr += str[i];
    }
    return revstr;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    string revstr = rev(str);
    cout << "Reversed string: " << revstr << endl;

    return 0;
}
