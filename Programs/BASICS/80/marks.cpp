// 80. Write a C++ Program to Accept the Marks of a Student and find Total Marks and Percentage

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    char name[20];
    int m, roll, n;
    float tmarks = 0, per;

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
    n = n * 100;
    per = (tmarks / n) * 100;
    cout << "\t\t\t\t-----STUDENT DETAILS-----";
    cout << "\nNAME :" << name << "\nROLL NO. :" << roll << endl;
    cout << "Total Marks: " << tmarks << endl;
    cout << "Percentage: " << setprecision(4) << per << "%" << endl;

    return 0;
}
