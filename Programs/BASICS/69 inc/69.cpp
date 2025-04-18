// 69. Write a C++ program to convert all characters in a string to uppercase

#include <iostream>
#include <string>
// #include <cctype> // for toupper()

using namespace std;

// void up(string &str) {
//     for ( i = 0; i <= str.length(); i++)
//     {
//         uppercase(str)
//     }
    
// }

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    // up(str);

    cout << "String in uppercase: " << uppercase(str) << endl;

    return 0;
}
