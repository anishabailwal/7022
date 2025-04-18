// 3. Define a class Matrix to represent matrices. Overload the * operator to multiply two matrices.

#include <iostream>
using namespace std;

class Matrix
{
	int mat[10][10];
	int r, c;

public:
	void get(int, int);
	void display();
	Matrix operator*(Matrix);
};

void Matrix::get(int r1, int c1)
{
	r = r1;
	c = c1;
	cout << "\nEnter data of matrix : \n";
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "Enter element at address " << (i + 1) << " " << (j + 1) << " : ";
			cin >> mat[i][j];
		}
	}
}

void Matrix::display()
{
	cout << "\nEnteres matrix : \n";
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "\t" << mat[i][j];
		}
		cout << endl;
	}
}

Matrix Matrix::operator*(Matrix x)
{
	Matrix y;
	int sum;
	r = x.r;
	c = x.c;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			sum = 0;
			for (int k = 0; k < 2; k++)
			{
				sum = sum + mat[i][k] * x.mat[k][j];
			}
			y.mat[i][j] = sum;
			cout << sum << "\t";
		}
		cout << endl;
	}
	y.display();
}
int main()
{
	Matrix m1, m2, ans(m1);
	int r, c;
	cout << "Enter number of rows of matrix (<=10) : ";
	cin >> r;
	cout << "Enter number of columns of matrix (<=10) : ";
	cin >> c;
	m1.get(r, c);
	m2.get(r, c);
	m1.display();
	m2.display();
	ans = m1 * m2;
	// ans.display();
}
