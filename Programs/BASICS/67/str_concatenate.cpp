// 67. Write a C++ program to concatenate two string

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);

    string str = str1 + str2;
    cout << "Concatenated string : " << str << endl;
    return 0;
}
