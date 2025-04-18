// 103. Write a C++ method to check numbers is palindrome number or not

#include <iostream>

using namespace std;

int rev(int num) 
{
    int rev = 0;

    while (num != 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    return rev;
}

int main() {
    int num;

    cout << "Enter an integer number: ";
    cin >> num;

    int revnum = rev(num);
    if(revnum == num)
    cout<<"The entered number is a palindrome. "<<endl;

    else
    cout << "The entered number is not a palindrome. "<< endl;

    return 0;
}