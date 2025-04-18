#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int grade;
    vector<string> courses;

public:
    // Constructor
    Student(string n, int g) : name(n), grade(g) {}

    // Method to add a course
    void addCourse(string course) {
        courses.push_back(course);
        cout << "Course '" << course << "' added successfully." << endl;
    }

    // Method to remove a course
    void removeCourse(string course) {
        for (auto it = courses.begin(); it != courses.end(); ++it) {
            if (*it == course) {
                courses.erase(it);
                cout << "Course '" << course << "' removed successfully." << endl;
                return;
            }
        }
        cout << "Course '" << course << "' not found." << endl;
    }

    // Method to display student info
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Grade: " << grade << endl;
        cout << "Courses: ";
        for (const auto& course : courses) {
            cout << course << ", ";
        }
        cout << endl;
    }
};

int main() {
    string name;
    int grade;
    cout << "Enter student's name: ";
    getline(cin, name);
    cout << "Enter student's grade: ";
    cin >> grade;
    cin.ignore(); // Clear the newline character from the input buffer

    Student student(name, grade);

    char choice;
    do {
        cout << "\nChoose an option:\n";
        cout << "1. Add course\n";
        cout << "2. Remove course\n";
        cout << "3. Display student info\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear the newline character from the input buffer

        switch (choice) {
            case '1': {
                string course;
                cout << "Enter course name to add: ";
                getline(cin, course);
                student.addCourse(course);
                break;
            }
            case '2': {
                string course;
                cout << "Enter course name to remove: ";
                getline(cin, course);
                student.removeCourse(course);
                break;
            }
            case '3':
                student.displayInfo();
                break;
            case '4':
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != '4');

    return 0;
}
