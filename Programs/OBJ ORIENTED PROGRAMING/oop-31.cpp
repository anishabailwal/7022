#include <iostream>
#include <vector>
#include <string>

class Student
{
private:
    int student_id;
    std::string student_name;
    std::vector<int> grades;

public:
    // Constructor
    Student(int id, const std::string &name) : student_id(id), student_name(name) {}

    // Getter for student ID
    int getStudentID() const
    {
        return student_id;
    }

    // Setter for student ID
    void setStudentID(int id)
    {
        student_id = id;
    }

    // Getter for student name
    std::string getStudentName() const
    {
        return student_name;
    }

    // Setter for student name
    void setStudentName(const std::string &name)
    {
        student_name = name;
    }

    // Method to add grade with validation
    void addGrade(int grade)
    {
        if (grade >= 0 && grade <= 100)
        {
            grades.push_back(grade);
        }
        else
        {
            std::cout << "Invalid grade! Grade should be between 0 and 100." << std::endl;
        }
    }

    // Method to remove grade
    void removeGrade(int index)
    {
        if (index >= 0 && index < grades.size())
        {
            grades.erase(grades.begin() + index);
            std::cout << "Grade at index " << index << " removed successfully." << std::endl;
        }
        else
        {
            std::cout << "Invalid index!" << std::endl;
        }
    }

    // Method to modify grade
    void modifyGrade(int index, int newGrade)
    {
        if (index >= 0 && index < grades.size())
        {
            if (newGrade >= 0 && newGrade <= 100)
            {
                grades[index] = newGrade;
                std::cout << "Grade at index " << index << " modified successfully." << std::endl;
            }
            else
            {
                std::cout << "Invalid grade! Grade should be between 0 and 100." << std::endl;
            }
        }
        else
        {
            std::cout << "Invalid index!" << std::endl;
        }
    }

    // Method to modify student name
    void modifyStudentName(const std::string &newName)
    {
        student_name = newName;
        std::cout << "Student name modified successfully." << std::endl;
    }

    // Method to display all grades
    void displayGrades() const
    {
        std::cout << "Grades for " << student_name << " (ID: " << student_id << "): ";
        for (int grade : grades)
        {
            std::cout << grade << " ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    int id;
    std::string name;
    std::cout << "Enter student ID: ";
    std::cin >> id;
    std::cout << "Enter student name: ";
    std::cin.ignore(); // Ignore the newline character left in the stream
    std::getline(std::cin, name);

    // Creating a student object
    Student student1(id, name);

    char choice;
    do
    {
        std::cout << "\nChoose an operation: " << std::endl;
        std::cout << "1. Add Grade" << std::endl;
        std::cout << "2. Remove Grade" << std::endl;
        std::cout << "3. Modify Grade" << std::endl;
        std::cout << "4. Modify Student Name" << std::endl;
        std::cout << "5. Display Grades" << std::endl;
        std::cout << "6. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case '1':
        {
            int grade;
            std::cout << "Enter grade to add: ";
            std::cin >> grade;
            student1.addGrade(grade);
            break;
        }
        case '2':
        {
            int index;
            std::cout << "Enter index of grade to remove: ";
            std::cin >> index;
            student1.removeGrade(index);
            break;
        }
        case '3':
        {
            int index, newGrade;
            std::cout << "Enter index of grade to modify: ";
            std::cin >> index;
            std::cout << "Enter new grade: ";
            std::cin >> newGrade;
            student1.modifyGrade(index, newGrade);
            break;
        }
        case '4':
        {
            std::string newName;
            std::cout << "Enter new student name: ";
            std::cin.ignore(); // Ignore the newline character left in the stream
            std::getline(std::cin, newName);
            student1.modifyStudentName(newName);
            break;
        }
        case '5':
            student1.displayGrades();
            break;
        case '6':
            std::cout << "Exiting program." << std::endl;
            break;
        default:
            std::cout << "Invalid choice! Please enter a valid option." << std::endl;
        }
    } while (choice != '6');

    return 0;
}
