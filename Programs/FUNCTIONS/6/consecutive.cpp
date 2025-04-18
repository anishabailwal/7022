//6. Write a C++ method that accepts three integers and checks whether they are consecutive or not. Returns true or false.

#include <iostream>
using namespace std;
bool consecutive(int a, int b, int c)
{
    if (a - b == 0 || b - c == 0 || a - c == 0)
    {
        return false;
    }
    if (a - b == 1 && b - c == 1)
    {
        return true;
    }
    if (a - b == -1 && b - c == -1)
    {
        return true;
    }
    return false;
}

int main()
{
    int x, y, z;
    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;
    cout<<"Enter the third number : ";
    cin>>z;
    bool con = consecutive(x, y, z);
    if (con)

        cout << "Yes," << x << "," << y << " and " << z << " are consecutive." << endl;

    else
        cout << "No," << x << "," << y << " and " << z << " are not consecutive." << endl;

    return 0;
}
