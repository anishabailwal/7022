// 60. Write a C++ program to display the multiplication table of a given integer


#include <iostream>
using namespace std ;
int main() {
    int num;

    cout << "Enter the number whose multiplication table you want to print: ";
    cin >> num;
    for (int i = 1; i <= 10; i++) 
    {
        cout << num << " * " << i << " = " << (num * i) << endl;
    }

    return 0;
}
