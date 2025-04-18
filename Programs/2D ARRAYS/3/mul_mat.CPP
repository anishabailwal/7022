// 3. Program to Multiply Two Matrices



#include <iostream>
using namespace std;

const int MAX = 100;

void inptmatrix(int mat[][MAX], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> mat[i][j];
        }
    }
}

void multiply(int mat1[][MAX], int mat2[][MAX], int res[][MAX], int rows1, int cols1, int rows2, int cols2)
{
    if (cols1 != rows2)
    {
        cout << "\nMatrix multiplication not possible!" << endl;
        return;
    }

    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols2; ++j)
        {
            res[i][j] = 0;
            for (int k = 0; k < cols1; ++k)
            {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printmatrix(int mat[][MAX], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int mat1[MAX][MAX], mat2[MAX][MAX], res[MAX][MAX];
    int rows1, cols1, rows2, cols2;

    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> rows1 >> cols1;

    cout << "Enter the number of rows and columns of the second matrix: ";
    cin >> rows2 >> cols2;

    if (cols1 != rows2)
    {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    cout << "\nEnter the elements of first matrix :";
    inptmatrix(mat1, rows1, cols1);

    cout << "\nEnter the elements of second matrix :";
    inptmatrix(mat2, rows2, cols2);

    multiply(mat1, mat2, res, rows1, cols1, rows2, cols2);

    cout << "\nResultant matrix : " << endl;
    printmatrix(res, rows1, cols2);

    return 0;
}

// OUTPUT-
// CASE 1
// Enter the number of rows and columns of the first matrix: 4
// 2
// Enter the number of rows and columns of the second matrix: 5
// 3
// Matrix multiplication not possible!

// CASE 2
// Enter the number of rows and columns of the first matrix: 2
// 4
// Enter the number of rows and columns of the second matrix: 4
// 2

// Enter the elements of first matrix :
// Enter element at position (1,1): 1
// Enter element at position (1,2): 3
// Enter element at position (1,3): 2
// Enter element at position (1,4): 6
// Enter element at position (2,1): 5
// Enter element at position (2,2): 4
// Enter element at position (2,3): 9
// Enter element at position (2,4): 7

// Enter the elements of second matrix :
// Enter element at position (1,1): 8
// Enter element at position (1,2): 7
// Enter element at position (2,1): 5
// Enter element at position (2,2): 2
// Enter element at position (3,1): 3
// Enter element at position (3,2): 1
// Enter element at position (4,1): 0
// Enter element at position (4,2): 6

// Resultant matrix :
// 29 51
// 87 94