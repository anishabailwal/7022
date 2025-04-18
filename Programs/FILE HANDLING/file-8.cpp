// Write a C++ program to sort the lines of a text file in alphabetical order.

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string inputFileName = "input.txt";

    ifstream inputFile(inputFileName);
    if (!inputFile)
    {
        cerr << "Error: Cannot open input file." << endl;
        return 1;
    }

    vector<string> lines;
    string line;
    while (getline(inputFile, line))
    {
        lines.push_back(line);
    }
    inputFile.close();

    sort(lines.begin(), lines.end());

    for (const auto &sortedLine : lines)
    {
        cout << sortedLine << endl;
    }

    return 0;
}
