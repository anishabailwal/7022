// 66. Write a C++ program to create a simple calculator (1. ADDITION, 2. SUBTRACTION, 3. MULTIPLICATION, 4. DIVISION, 5. EXPONENTIAL, 6. PERCENTAGE, 7. EXIT)

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int ch;
    double num1, num2;

    do {
        cout<<"\t\t\t\t\t----- MENU -----"<<endl;
        cout << "\t\t\t\t\t1. Addition" << endl;
        cout << "\t\t\t\t\t2. Subtraction" << endl;
        cout << "\t\t\t\t\t3. Multiplication" << endl;
        cout << "\t\t\t\t\t4. Division" << endl;
        cout << "\t\t\t\t\t5. Exponential" << endl;
        cout << "\t\t\t\t\t6. Percentage" << endl;
        cout << "\t\t\t\t\t7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch(ch) 
        {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error! (Division by zero)" << endl;
                break;
            case 5:
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << pow(num1, num2) << endl;
                break;
            case 6:
                cout << "Enter the number and percentage: ";
                cin >> num1 >> num2;
                cout << "Result: " << (num1 * num2) / 100 << endl;
                break;
            case 7:
                cout << "Exiting ..." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number from 1 to 7." << endl;
        }
    } while(ch != 7);

    return 0;
}
