// Write a C++ program to find and replace a specific word in a text file.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void findAndReplace(string &source, const string &find, const string &replace)
{
    size_t pos = 0;
    while ((pos = source.find(find, pos)) != string::npos)
    {
        source.replace(pos, find.length(), replace);
        pos += replace.length();
    }
}

int main()
{
    string filename, findWord, replaceWord;

    cout << "Enter the name of the text file: ";
    cin >> filename;

    cout << "Enter the word to find: ";
    cin >> findWord;
    cout << "Enter the word to replace with: ";
    cin >> replaceWord;

    ifstream file(filename);

    if (!file.is_open())
    {
        cerr << "Error opening file." << endl;
        return 1;
    }

    string content((istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

    file.close();

    findAndReplace(content, findWord, replaceWord);

    ofstream outFile(filename);

    outFile << content;

    outFile.close();

    cout << "Word '" << findWord << "' replaced with '" << replaceWord << "' in the file " << filename << endl;

    return 0;
}
