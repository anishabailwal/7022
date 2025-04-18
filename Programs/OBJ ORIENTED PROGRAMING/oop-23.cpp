#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    static int nextRollNo; // Static variable to track the next roll number to be assigned
    int rollNo;
    string name;
    string className;

public:
    // Default constructor
    Student() : name(""), className("") {
        rollNo = ++nextRollNo;
    }

    // Parameterized constructor
    Student(string _name, string _className) : name(_name), className(_className) {
        rollNo = ++nextRollNo;
    }

    // Method to display student details
    void displayDetails() const {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
    }
};

// Initialize static variable outside the class definition
int Student::nextRollNo = 0;

int main() {
    // Create an array of 10 Student objects
    Student students[10];

    // Enter details for 10 students
    for (int i = 0; i < 10; ++i) {
        string name, className;
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, name);
        cout << "Enter class of student " << i + 1 << ": ";
        getline(cin, className);

        students[i] = Student(name, className);
    }

    // Display details of all students
    cout << "\nStudent Details:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        students[i].displayDetails();
    }

    return 0;
}
