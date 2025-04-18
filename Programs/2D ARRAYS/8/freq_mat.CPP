// 8. Program to find the frequency of odd & even numbers in the given matrix

#include <iostream>
using namespace std;

int main()
{
    int a[10][10], i, j, odd = 0, even = 0;
    cout << "Enter the elements of matrix :";
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
            if (a[i][j] % 2 == 0)
                even++;
            else
                odd++;
        }
    }
    cout << "The frequency of odd no.in matrix:" << odd << endl;
    cout << "The frequency of even no. in matrix:" << even << endl;
}
