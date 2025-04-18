// 11. Program to Transpose matrix


#include <iostream>
using namespace std;

int main()
{
    int a[10][10], i, j, b[10][10];
    cout << "\nEnter the elements of matrix :" ;
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
            b[j][i] = a[i][j];
    }
    cout << "The transpose of matrix is :" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
}
