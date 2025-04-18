// 1.Write a C++ program to create a new text file and write some text into it.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("example.txt");

    if (file.is_open())
    {
        file << "Hello, this is a text file created using C++!\n";
        file << "hello how are you.\n";
        file << "I am fine.\n";

        file.close();

        cout << "Text successfully written to the file." << endl;
    }
    else
    {
        cout << "Unable to open the file for writing." << endl;
    }

    return 0;
}