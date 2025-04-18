#include <iostream>
using namespace std;

void set(int &n, int &nn, int &nnn)
{
    cout << "Enter an integer: " << endl;
    cin >> n;
    nn = n * n;
    nnn = n * n * n;
}

void get(int n, int nn, int nnn)
{
    int s = n + nn + nnn;
    cout << "The given integer in the form of n+nn+nnn is: " << s;
}

int main()
{
    int n, nn, nnn;
    set(n, nn, nnn);
    get(n, nn, nnn);
    return 0;
}
