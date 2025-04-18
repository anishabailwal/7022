// Write a C++ program to read a CSV file and display its contents in tabular form.

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

vector<string> split(const string &s, char delimiter)
{
    vector<string> tokens;
    stringstream ss(s);
    string token;
    while (getline(ss, token, delimiter))
    {
        tokens.push_back(token);
    }
    return tokens;
}

void displayCSV(const string &filename)
{
    ifstream file(filename);
    if (!file.is_open())
    {
        cerr << "Failed to open file: " << filename << endl;
        return;
    }

    string line;
    while (getline(file, line))
    {
        vector<string> columns = split(line, ',');
        for (const string &column : columns)
        {
            cout.width(20);
            cout << column << " | ";
        }
        cout << endl;
    }

    file.close();
}

int main()
{
    string filename;

    cout << "Enter the name of the CSV file: ";
    cin >> filename;

    cout << "Contents of the CSV file:" << endl;
    displayCSV(filename);

    return 0;
}
