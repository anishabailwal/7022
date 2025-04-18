// C++ Program to convert float to String using to_string

#include <iostream>
#include <string>

using namespace std;

int main() {
    float num = 123.456;
    string str = to_string(num);
    cout << "The string value of " << num << " is: " << str << endl;

    return 0;
}
