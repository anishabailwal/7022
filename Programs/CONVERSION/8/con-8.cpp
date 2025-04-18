// C++ Program to convert double to String std::to_string() 

#include <iostream>
#include <string>

using namespace std;

int main() {
    double num = 123.456;
    string str = to_string(num);
    cout << "The string value of " << num << " is: " << str << endl;
}
