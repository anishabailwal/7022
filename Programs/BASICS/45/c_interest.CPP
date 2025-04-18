#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float p, r, t, a, ci;
    cout << "enter the principal amount";
    cin >> p;
    cout << "enter the rate amount ";
    cin >> r;
    cout << "enter the time period";
    cin >> t;
    a = p * ((pow((1 + r / 100), t)));
    ci = a - p;
    cout << "compound interest " << ci;
}