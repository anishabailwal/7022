//3. Write a C++ method to display the middle character of a string.

#include <iostream>
#include <string>
using namespace std;

void mid(const string &str)
{
    int len = str.length();

    if (len % 2 == 0)
    {
        cout << "Even number of characters."<< endl;
        cout << "The middle two characters of the string '" << str << "' are: " << str[len / 2 - 1] << str[len / 2] << endl;
    }
    else
    {
        cout << "Odd number of characters."<< endl;
        cout << "The middle character of the string '" << str << "' is: " << str[len / 2] << endl;
    }
}

int main()
{

    string str;
    cout << "Enter the string :";
    getline(cin, str);
    mid(str);
    return 0;
}
