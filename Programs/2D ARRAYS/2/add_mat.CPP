// 2. Program to Add Two Matrices



#include <iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], s[10][10], i, j, r, c;
    cout << "\nEnter the no.of row in matrix:";
    cin >> r;
    cout << "Enter the no. of columns in matrix:";
    cin >> c;
    cout << "\nEnter the elements of first matrix:";
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            cin >> a[i][j];
    cout << "\nEnter the elements of second matrix:";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            s[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "Sum of two matrix " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << s[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// OUTPUT-
// Enter the no.of row in matrix:4
// Enter the no. of columns in matrix:2

// Enter the elements of first matrix:84
// 75
// 94
// 96
// 43
// 52
// 50
// 10

// Enter the elements of second matrix:13
// 19
// 46
// 47
// 52
// 64
// 79
// 31
// Sum of two matrix
// 97 94
// 140 143
// 95 116
// 129 41