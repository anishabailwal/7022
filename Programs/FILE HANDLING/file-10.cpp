// Write a C++ program to split a large text file into smaller files of equal size.

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void splitFile(const string &inputFilename, const string &outputPrefix, int chunkSize)
{
    ifstream inputFile(inputFilename, ios::binary);
    if (!inputFile.is_open())
    {
        cerr << "Error: Unable to open input file." << endl;
        return;
    }

    int fileCount = 0;
    while (!inputFile.eof())
    {
        stringstream outputFilename;
        outputFilename << outputPrefix << "_" << fileCount << ".txt";

        ofstream outputFile(outputFilename.str(), ios::binary);
        if (!outputFile.is_open())
        {
            cerr << "Error: Unable to create output file." << endl;
            inputFile.close();
            return;
        }

        char buffer[chunkSize];
        inputFile.read(buffer, chunkSize);
        outputFile.write(buffer, inputFile.gcount());

        outputFile.close();

        fileCount++;
    }

    inputFile.close();

    cout << "File split successfully into " << fileCount << " smaller files." << endl;
}

int main()
{
    string inputFilename = "input.txt";
    string outputPrefix = "output";
    int chunkSize = 1024;
    splitFile(inputFilename, outputPrefix, chunkSize);

    return 0;
}
