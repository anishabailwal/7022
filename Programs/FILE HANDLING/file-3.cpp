// Write a C++ program to count the number of lines in a text file.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    string filename;

    cout << "Enter the name of the text file: ";
    cin >> filename;

    ifstream file(filename);

    if (!file.is_open())
    {
        cerr << "Error opening file." << endl;
        return 1;
    }

    int lineCount = 0;
    string line;
    while (getline(file, line))
    {
        lineCount++;
    }

    file.close();

    cout << "Number of lines in the file " << filename << ": " << lineCount << endl;

    return 0;
}
