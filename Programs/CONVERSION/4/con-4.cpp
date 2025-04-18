// C++ Program to convert long to String using to_string

#include <iostream>
#include <string>

using namespace std;

int main() {
    long num = 1234567890;
    string str = to_string(num);
    cout << "The string value of " << num << " is: " << str << endl;
}
