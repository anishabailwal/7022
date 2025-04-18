// 9. Program to find the sum of each row and each column of a matrix

#include <iostream>
using namespace std;

int main()
{
    int a[10][10], i, j, row = 0, column = 0;
    cout << "Enter the elements of matrix " << endl;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            cin >> a[i][j];
    cout << "Matrix form" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            row += a[i][j];
    }
    cout << "The sum of row in matrix is :" << row << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            column += a[j][i];
    }
    cout << "The sum of column in matrix is :" << column;
}