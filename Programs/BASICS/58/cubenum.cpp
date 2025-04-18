// 58. Write a C++ program to display the cube of the number upto given an integer

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    cout << "Cubes of numbers up to " << n << " are:" << endl;
    cout << "NUMBER \t\tCUBIC VALUE" << endl;
    for (int i = 1; i <= n; ++i) {
        cout << i << "\t\t" << pow(i, 3) << endl;
    }

    return 0;
}
