// 53. Write a C++ Program to accept number of week’s day (1-7) and print name of the day

#include <iostream>
using namespace std;

int main()
{
    int daynum;

    cout << "Enter the number of the day (1-7): ";
    cin >> daynum;

    switch (daynum)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Please enter a number between 1 and 7." << endl;
    }

    return 0;
}
