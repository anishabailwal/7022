// 82. Write a C++ program to calculate the sum of first 10 natural number using loop

#include <iostream>

using namespace std;
int main() {
    int sum = 0;

    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }

    cout << "Sum of first 10 natural numbers: " << sum << endl;

    return 0;
}
