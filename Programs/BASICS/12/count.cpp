// 12.Write a C++ program to count the letters, spaces, numbers and other characters of an input string
#include<iostream>

using namespace std;
void count(string str)
{
    int letters=0,spaces=0,num=0,spch=0;

    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i]>='a'||str[i]>='A')
    //         letters++;
    //     else if (str[i]==' ')
    //         spaces++;
    //     else if (str[i]>=0||str[i]<0)
    //         num++;
    //     else
    //         spch++;
    // }

    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
            letters++;
        else if (isspace(str[i]))
            spaces++;
        else if (isdigit(str[i]))
            num++;
        else
            spch++;
    }

    cout << "\nLetters: " << letters << "\nSpaces: " << spaces << "\nNumbers: " << num << "\nSpecial characters: " << spch;
}
    
int main()
{
    string str;
    cout<<"Enter the sentence :";
    getline(cin,str);
    cout<<str;
    count(str);
    return 0;
}
