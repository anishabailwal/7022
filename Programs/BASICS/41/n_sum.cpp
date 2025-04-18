// 41. C++ program to sum of N numbers

#include <iostream>
using namespace std;

int main()
{
    int n;

    int sum = 0;

    do
    {
        cout << "Enter number (input '0' to terminate): ";
        cin >> n;
        sum += n;
    } while (n!=0);
    
    cout << "Sum of the numbers is: " << sum << endl;

    return 0;
}
