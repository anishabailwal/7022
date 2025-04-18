//7. Write a C++ method that checks whether all the characters in a given string are vowels (a,e,i,o,u) or not. Return true if each character in the string is a vowel, otherwise return false.

#include <iostream>
using namespace std;

bool isallvowel(const string &str)
{
    bool isvowel = false;
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (char c : str)
    {
        bool isVowel = false;
        char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        for (int i = 0; i < 10; i++)
        {
            if (c == vowels[i])
            {
                isVowel = true;
                break;
            }
        }
        if (!isVowel)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);
    bool vowel = isallvowel(str);
    if (vowel)
    {
        cout << "All characters in the string are vowels." << endl;
    }
    else
    {
        cout << "Not all characters in the string are vowels." << endl;
    }
    return 0;
}
