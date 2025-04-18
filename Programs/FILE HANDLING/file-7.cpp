// Write a C++ program to append new data to an existing text file.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string filename;

    cout << "Enter the name of the text file: ";
    cin >> filename;

    ofstream file(filename, ios::app);

    if (!file.is_open())
    {
        cerr << "Error opening file." << endl;
        return 1;
    }

    string newData;
    cout << "Enter the data to append: ";
    cin.ignore();
    getline(cin, newData);

    file << newData << endl;

    file.close();

    cout << "Data appended successfully to the file " << filename << endl;

    return 0;
}