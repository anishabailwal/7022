// 6. Program to display the lower triangular matrix

#include <iostream>
using namespace std;

int main()
{
  int a[10][10], i, j;
  cout << "\nEnter the elements of matrix :" << endl;
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
  cout << "Lower triangular matrix is shown below :" << endl;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      if (i < j)
      {
        a[i][j] = 0;
      }
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
