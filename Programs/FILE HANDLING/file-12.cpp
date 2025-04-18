// Write a C++ program to decrypt the contents of a text file encrypted using the above algorithm.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char encryptChar(char c, int shift)
{
    if (isalpha(c))
    {
        char base = isupper(c) ? 'A' : 'a';
        return ((c - base + shift) % 26) + base;
    }
    return c;
}

void encryptFile(const string &inputFileName, const string &outputFileName, int shift)
{
    ifstream inputFile(inputFileName);
    ofstream outputFile(outputFileName);

    if (!inputFile || !outputFile)
    {
        cerr << "Error opening files!" << endl;
        return;
    }

    char c;
    while (inputFile.get(c))
    {
        outputFile << encryptChar(c, shift);
    }

    inputFile.close();
    outputFile.close();
    cout << "Encryption complete." << endl;
}

int main()
{
    string inputFileName, outputFileName;
    int shift;

    cout << "Enter the name of the input file: ";
    cin >> inputFileName;
    cout << "Enter the name of the output file: ";
    cin >> outputFileName;
    cout << "Enter the shift value for encryption: ";
    cin >> shift;

    encryptFile(inputFileName, outputFileName, shift);

    return 0;
}