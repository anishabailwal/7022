// Write a C++ program to calculate the average of numbers stored in a file.

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

double calculateAverage(const vector<double> &numbers)
{
    if (numbers.empty())
        return 0.0;

    double sum = 0.0;
    for (double num : numbers)
    {
        sum += num;
    }
    return sum / numbers.size();
}

vector<double> readNumbersFromFile(const string &filename)
{
    vector<double> numbers;
    ifstream file(filename);
    if (!file.is_open())
    {
        cerr << "Failed to open file: " << filename << endl;
        return numbers;
    }

    double num;
    while (file >> num)
    {
        numbers.push_back(num);
    }

    file.close();
    return numbers;
}

int main()
{
    string filename;

    cout << "Enter the name of the file containing numbers: ";
    cin >> filename;

    vector<double> numbers = readNumbersFromFile(filename);

    double average = calculateAverage(numbers);

    cout << "Average of numbers in the file: " << average << endl;

    return 0;
}