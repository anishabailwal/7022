//C++ Program to convert String to float using stof()

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "123.456";
    float num = stof(str);
    cout << "The float value of " << str << " is: " << num << endl;
}

