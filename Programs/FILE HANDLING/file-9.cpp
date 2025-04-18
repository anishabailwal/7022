// Write a C++ program to merge multiple text files into a single file.

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void mergeFiles(const vector<string> &inputFiles, const string &outputFile)
{
    ofstream outputFileStream(outputFile);
    if (!outputFileStream)
    {
        cerr << "Error: Cannot create output file." << endl;
        return;
    }

    for (const auto &inputFile : inputFiles)
    {
        ifstream inputStream(inputFile);
        if (!inputStream)
        {
            cerr << "Error: Cannot open input file " << inputFile << endl;
            continue;
        }

        string line;
        while (getline(inputStream, line))
        {
            outputFileStream << line << endl;
        }

        inputStream.close();
    }

    outputFileStream.close();

    cout << "Files merged successfully into " << outputFile << endl;
}

int main()
{
    vector<string> inputFiles = {"input1.txt", "input2.txt", "input3.txt"};
    string outputFile = "output.txt";

    mergeFiles(inputFiles, outputFile);

    return 0;
}
