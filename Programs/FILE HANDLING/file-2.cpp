// Write a C++ program to open an existing text file and display its contents on the console.

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

    string line;
    cout << "Contents of the file " << filename << ":\n";
    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();

    return 0;
}
