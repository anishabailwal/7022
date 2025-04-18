

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const int MAX_STUDENTS = 10;

struct Student
{
    int rollno;
    char name[50];
    float marks;
    char mobileno[15];

    Student()
    {
        rollno = 0;
        strcpy(name, "");
        marks = 0.0;
        strcpy(mobileno, "");
    }
};

int getMenuChoice()
{
    int choice;
    cout << "\n1. Insert Record\n2. Delete Record\n3. Update Record\n4. Search Record\n5. Clone the file\n6. Exit\nEnter your choice: ";
    cin >> choice;
    return choice;
}

void insertRecord(fstream &file)
{
    Student student;
    cout << "Enter Roll Number: ";
    cin >> student.rollno;
    cout << "Enter Name: ";
    cin.ignore();
    cin.getline(student.name, 50);
    cout << "Enter Marks: ";
    cin >> student.marks;
    cout << "Enter Mobile Number: ";
    cin >> student.mobileno;

    file.write(reinterpret_cast<char *>(&student), sizeof(Student));
}

void deleteRecord(fstream &file, int rollno)
{
    file.seekg(0, ios::beg);
    Student student;
    ofstream tempFile("temp.bin", ios::binary);
    while (file.read(reinterpret_cast<char *>(&student), sizeof(Student)))
    {
        if (student.rollno != rollno)
        {
            tempFile.write(reinterpret_cast<char *>(&student), sizeof(Student));
        }
    }
    file.close();
    tempFile.close();
    remove("students.bin");
    rename("temp.bin", "students.bin");
    cout << "Record deleted successfully!" << endl;
}

void updateRecord(fstream &file, int rollno)
{
    file.seekg(0, ios::beg);
    Student student;
    bool found = false;
    while (file.read(reinterpret_cast<char *>(&student), sizeof(Student)))
    {
        if (student.rollno == rollno)
        {
            cout << "Enter New Name: ";
            cin.ignore();
            cin.getline(student.name, 50);
            cout << "Enter New Marks: ";
            cin >> student.marks;
            cout << "Enter New Mobile Number: ";
            cin >> student.mobileno;
            file.seekp(-sizeof(Student), ios::cur);
            file.write(reinterpret_cast<char *>(&student), sizeof(Student));
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Record not found!" << endl;
    }
    else
    {
        cout << "Record updated successfully!" << endl;
    }
}

void searchRecord(fstream &file, int rollno)
{
    file.seekg(0, ios::beg);
    Student student;
    bool found = false;
    while (file.read(reinterpret_cast<char *>(&student), sizeof(Student)))
    {
        if (student.rollno == rollno)
        {
            cout << "Roll Number: " << student.rollno << endl;
            cout << "Name: " << student.name << endl;
            cout << "Marks: " << student.marks << endl;
            cout << "Mobile Number: " << student.mobileno << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Record not found!" << endl;
    }
}

// Function to clone the binary file
void cloneFile()
{
    ifstream srcFile("students.bin", ios::binary);
    ofstream destFile("students_clone.bin", ios::binary);
    destFile << srcFile.rdbuf();
    srcFile.close();
    destFile.close();
    cout << "File cloned successfully!" << endl;
}

int main()
{
    fstream file("students.bin", ios::in | ios::out | ios::binary);
    if (!file)
    {
        file.open("students.bin", ios::out | ios::binary);
    }

    while (true)
    {
        int choice = getMenuChoice();
        switch (choice)
        {
        case 1:
            if (file.tellp() / sizeof(Student) >= MAX_STUDENTS)
            {
                cout << "Maximum limit reached!" << endl;
            }
            else
            {
                insertRecord(file);
            }
            break;
        case 2:
        {
            int rollno;
            cout << "Enter Roll Number to delete: ";
            cin >> rollno;
            deleteRecord(file, rollno);
            break;
        }
        case 3:
        {
            int rollno;
            cout << "Enter Roll Number to update: ";
            cin >> rollno;
            updateRecord(file, rollno);
            break;
        }
        case 4:
        {
            int rollno;
            cout << "Enter Roll Number to search: ";
            cin >> rollno;
            searchRecord(file, rollno);
            break;
        }
        case 5:
            cloneFile();
            break;
        case 6:
            file.close();
            return 0;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}