// 72. Write a C++ program to replace all the ‘d’ characters with ‘f’ characters

#include <iostream>
#include <string>

using namespace std;

void func(string &str) 
{
    for (int i = 0; i < str.length(); i++) 
    {
        if (str[i] == 'd') 
        {
            str[i] = 'f';
        }
    }
}

int main() 
{
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);
    func(str);
    
    cout << "Sentence after replacing 'd' with 'f': " << str << endl;
    return 0;
}
