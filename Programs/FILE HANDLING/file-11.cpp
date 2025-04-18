

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<int> findStringInFile(const string &filename, const string &searchString)
{
    vector<int> lineNumbers;
    ifstream file(filename);
    if (!file.is_open())
    {
        cerr << "Error opening file." << endl;
        return lineNumbers;
    }

    string line;
    int lineNumber = 1;
    while (getline(file, line))
    {
        size_t pos = line.find(searchString);
        if (pos != string::npos)
        {
            lineNumbers.push_back(lineNumber);
            cout << "Found '" << searchString << "' on line " << lineNumber << ": " << line << endl;
        }
        lineNumber++;
    }

    file.close();
    return lineNumbers;
}

int main()
{
    string filename, searchString;
    cout << "Enter the filename: ";
    getline(cin, filename);
    cout << "Enter the string to search for: ";
    getline(cin, searchString);

    vector<int> foundLines = findStringInFile(filename, searchString);

    if (foundLines.empty())
    {
        cout << "String not found in the file." << endl;
    }
    else
    {
        cout << "String found on line(s): ";
        for (int line : foundLines)
        {
            cout << line << " ";
        }
        cout << endl;
    }

    return 0;
}