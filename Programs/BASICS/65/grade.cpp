// 65. Write a C++ program that determines a student’s grade (81-100 : A, 61-80 : B, 41-60 : C, 0-40 : D)


#include <iostream>
using namespace std;

char grade(int marks) 
{
    if (marks >= 81 && marks <= 100) 
    {
        return 'A';
    } 
    else if (marks >= 61 && marks <= 80) 
    {
        return 'B';
    } 
    else if (marks >= 41 && marks <= 60) 
    {
        return 'C';
    } 
    else if (marks >= 0 && marks <= 40) 
    {
        return 'D';
    } 
}

int main() 
{
    int marks;
    cout << "Enter the student's marks of a particular subject out of 100: ";
    cin >> marks;

    cout << "The student's grade is: " << grade(marks) << endl;
    return 0;
}
