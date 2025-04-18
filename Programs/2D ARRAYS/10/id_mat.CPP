// 10. Program to determine whether a given matrix is an identity matrix

#include <iostream>
using namespace std;

int main()
{
    int a[10][10], i, j, flag = 0;
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
        {
            if (((i == j) && (a[i][j] != 1) || (i != j) && (a[i][j] != 0)))
                flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "Matrix is an identity matrix.";
    else
        cout << "Matrix is not an identity matrix.";
}
