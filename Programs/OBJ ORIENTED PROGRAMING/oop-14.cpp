#include <iostream>
#include <string>

using namespace std;

class School
{
private:
    static const int MAX_STUDENTS = 100;
    static const int MAX_TEACHERS = 50;
    static const int MAX_CLASSES = 20;

    string students[MAX_STUDENTS];
    string teachers[MAX_TEACHERS];
    string classes[MAX_CLASSES];
    int numStudents = 0;
    int numTeachers = 0;
    int numClasses = 0;

public:
    // Method to add a student
    void addStudent(const string &name)
    {
        if (numStudents < MAX_STUDENTS)
        {
            students[numStudents++] = name;
            cout << "Student '" << name << "' added to the school." << endl;
        }
        else
        {
            cout << "Maximum limit for students reached." << endl;
        }
    }

    // Method to remove a student
    void removeStudent(const string &name)
    {
        for (int i = 0; i < numStudents; ++i)
        {
            if (students[i] == name)
            {
                for (int j = i; j < numStudents - 1; ++j)
                {
                    students[j] = students[j + 1];
                }
                numStudents--;
                cout << "Student '" << name << "' removed from the school." << endl;
                return;
            }
        }
        cout << "Student '" << name << "' not found in the school." << endl;
    }

    // Method to add a teacher
    void addTeacher(const string &name)
    {
        if (numTeachers < MAX_TEACHERS)
        {
            teachers[numTeachers++] = name;
            cout << "Teacher '" << name << "' added to the school." << endl;
        }
        else
        {
            cout << "Maximum limit for teachers reached." << endl;
        }
    }

    // Method to remove a teacher
    void removeTeacher(const string &name)
    {
        for (int i = 0; i < numTeachers; ++i)
        {
            if (teachers[i] == name)
            {
                for (int j = i; j < numTeachers - 1; ++j)
                {
                    teachers[j] = teachers[j + 1];
                }
                numTeachers--;
                cout << "Teacher '" << name << "' removed from the school." << endl;
                return;
            }
        }
        cout << "Teacher '" << name << "' not found in the school." << endl;
    }

    // Method to create a class
    void createClass(const string &className)
    {
        if (numClasses < MAX_CLASSES)
        {
            classes[numClasses++] = className;
            cout << "Class '" << className << "' created." << endl;
        }
        else
        {
            cout << "Maximum limit for classes reached." << endl;
        }
    }

    // Method to display menu
    void displayMenu()
    {
        cout << "\nChoose an option:\n";
        cout << "1. Add a student\n";
        cout << "2. Remove a student\n";
        cout << "3. Add a teacher\n";
        cout << "4. Remove a teacher\n";
        cout << "5. Create a class\n";
        cout << "6. Exit\n";
    }

    // Method to handle user input
    void handleUserInput()
    {
        char choice;
        do
        {
            displayMenu();
            cout << "Enter your choice: ";
            cin >> choice;
            cin.ignore(); // Clear the newline character from the input buffer

            switch (choice)
            {
            case '1':
            {
                string name;
                cout << "Enter the name of the student: ";
                getline(cin, name);
                addStudent(name);
                break;
            }
            case '2':
            {
                string name;
                cout << "Enter the name of the student to remove: ";
                getline(cin, name);
                removeStudent(name);
                break;
            }
            case '3':
            {
                string name;
                cout << "Enter the name of the teacher: ";
                getline(cin, name);
                addTeacher(name);
                break;
            }
            case '4':
            {
                string name;
                cout << "Enter the name of the teacher to remove: ";
                getline(cin, name);
                removeTeacher(name);
                break;
            }
            case '5':
            {
                string className;
                cout << "Enter the name of the class: ";
                getline(cin, className);
                createClass(className);
                break;
            }
            case '6':
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
            }
        } while (choice != '6');
    }
};

int main()
{
    School school;

    // Handle user input
    school.handleUserInput();

    return 0;
}