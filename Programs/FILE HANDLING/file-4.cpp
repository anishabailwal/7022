// Write a C++ program to count the number of words in a text file.

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>


using namespace std;

int main() {
string filename;
    
cout << "Enter the name of the text file: ";
cin >> filename;
    
ifstream file(filename);
    
    if (!file.is_open()) {
cerr << "Error opening file." << endl;
        return 1;
    }
    
    int wordCount = 0;
string word;
    while (file >> word) {
        wordCount++;
    }
    
    file.close();
    
    return 0;
}