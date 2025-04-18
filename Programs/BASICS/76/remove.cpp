// 76. Write a C++ program to remove a particular character from a string

#include <iostream>
#include <string>

using namespace std;

void func(string &str, char ch)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ch)
        {
            str.erase(i, 1);
        }
    }
}

int main()
{
    string str;
    char c;

    cout << "Enter the sentence : ";
    getline(cin, str);

    cout << "Enter the character to be removed: ";
    cin >> c;
    func(str, c);

    cout << "String after removing '" << c << "': " << str << endl;

    return 0;
}
