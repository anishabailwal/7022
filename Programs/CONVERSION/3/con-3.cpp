// C++ Program to convert String to long using stol()

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "1234567891011";
    long num = stol(str);
    cout << "The long value of " << str << " is: " << num << endl;
}
