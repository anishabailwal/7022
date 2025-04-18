// 12. Program to determine whether a given matrix is a sparse matrix. matrix

#include <iostream>
using namespace std;

int main()
{
    int a[10][10], i, j, c = 0, d = 0;
    cout << "Enter the elements of matrix: " << endl;
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
            if (a[i][j] == 0)
                c++;
            else
                d++;
    }
    if (c > d)
    {
        cout << " Given matrix is sparse matrix.";
    }
    else
    {
        cout << " Given matrix is not sparse matrix.";
    }
}