#include <iostream>
using namespace std;

int main()
{
    int m, y;

    cout << "1 for January\n2 for February\n3 for March\n4 for April\n5 for May\n6 for June\n7 for July \n8 for August\n9 for September \n10 for October\n11 for November\n12 for December";

    cout << "\nEnter the months number:";
    cin >> m;
    cout << "\nEnter the year :";
    cin >> y;
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "Month has 31 days";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "Month has 30 days";
        break;
    case 2:
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
            cout << "Month has 29 days (Leap year)";
        else
            cout << "Month has 28 days";
        break;
    default:
        cout << "Invalid month";
        break;
    }
}
