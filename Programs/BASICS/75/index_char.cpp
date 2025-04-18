// 75. Write a C++ program to get the character at the given index within the String

#include <iostream>
#include <string>

using namespace std;

char func(string &str, int ind)
{
    if (ind >= 0 && ind < str.length())
    {
        return str[ind];
    }
    else
    {
        return 0;
    }
}

int main()
{
    string str;
    int ind;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter the index to get the character: ";
    cin >> ind;

    char character = func(str, ind);

    if (character != 0)
    {
        cout << "Character at ind " << ind << ": " << character << endl;
    }
    else
    {
        cout << "Index out of range." << endl;
    }

    return 0;
}
