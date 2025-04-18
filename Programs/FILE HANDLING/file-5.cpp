// Write a C++ program to copy the contents of one text file to another.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    string sourceFilename, destinationFilename;

    cout << "Enter the name of the source text file: ";
    cin >> sourceFilename;
    cout << "Enter the name of the destination text file: ";
    cin >> destinationFilename;

    ifstream sourceFile(sourceFilename);

    if (!sourceFile.is_open())
    {
        cerr << "Error opening source file." << endl;
        return 1;
    }

    ofstream destinationFile(destinationFilename);

    if (!destinationFile.is_open())
    {
        cerr << "Error opening destination file." << endl;
        sourceFile.close();
        return 1;
    }

    string line;
    while (getline(sourceFile, line))
    {
        destinationFile << line << endl;
    }

    sourceFile.close();
    destinationFile.close();

    cout << "Contents copied successfully from " << sourceFilename << " to " << destinationFilename << endl;

    return 0;
}