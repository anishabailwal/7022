// 70. Write a C++ program to trim a string (remove whitespaces)

#include <iostream>
#include <string>

using namespace std;

void func(string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str.erase(i, 1);
        }
    }
}

int main()
{
    string str;

    cout << "Enter the sentence : ";
    getline(cin, str);

    func(str);

    cout << "String after removing 'whitespaces ': " << str << endl;

    return 0;
}
