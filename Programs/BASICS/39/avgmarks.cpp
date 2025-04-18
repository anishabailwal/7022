// 39. C++ program to calculate average marks

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    char name[20];
    int m, roll, n;
    float tmarks = 0, avg;

    cout << "\nEnter the name of student : ";
    cin >> name;
    cout << "Enter the Roll no. of student : ";
    cin >> roll;
    cout << "Enter the number of subjects :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter the marks of subject " << i + 1 << " (out of 100) :";
        cin >> m;
        tmarks += m;
    }

    avg = (tmarks / n);

    cout << "\t\t\t\t-----STUDENT DETAILS-----";
    cout << "\nNAME :" << name << "\nROLL NO. :" << roll << endl;
    cout << "Total Marks: " << tmarks << endl;
    cout << "Average Marks: " << setprecision(4) << avg << endl;

    return 0;
}
