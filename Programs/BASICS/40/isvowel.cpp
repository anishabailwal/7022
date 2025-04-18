// 40. C++ program to check vowel or consonant

#include <iostream>
using namespace std;

int main()
{
    char ch;
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    bool isVowel = false;

    cout << "Enter a character: ";
    cin >> ch;

    for (int i = 0; i < 10; i++)
    {
        if (ch == vowels[i])
        {
            isVowel = true;
            break;
        }
    }

    if (isVowel)
    {
        cout << ch << " is a vowel." << endl;
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << ch << " is a consonant." << endl;
    }
    else
    {
        cout << "It maybe a special charcter or it can be a number." << endl;
    }

    return 0;
}
