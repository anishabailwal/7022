// C++ Program to convert String to double stod()

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "123.456";
    double num = stod(str);
    cout << "The double value of " << str << " is: " << num << endl;

    return 0;
}
