// 1. Enter the Matrix of rows and columns entered by the user and print in matrix format



#include <iostream>
using namespace std;

int main()
{
    int a[10][10], i, j, r, c;
    cout << "\nEnter the no.of row in matrix:";
    cin >> r;
    cout << "Enter the no. of columns in matrix:";
    cin >> c;
    cout << "\nEnter the elements of rows and columns:" << endl;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            cin >> a[i][j];
    cout << "Matrix form" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// OUTPUT-
// Enter the no.of row in matrix:2
// Enter the no. of columns in matrix:4

// Enter the elements of rows and columns:
// 15
// 48
// 75
// 94
// 64
// 32
// 18
// 10
// Matrix form
// 15 48 75 94
// 64 32 18 10