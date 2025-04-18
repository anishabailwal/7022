// 7. Write a C++ program to convert a decimal number to binary numbers
#include<iostream>
using namespace std;

void bin(int n) {
    int binaryNum[50];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}
int main()
{
    int dec;
    cout<<"Enter the decimal number :";
    cin>>dec;
    cout<<"Binary equivalent :";
    bin(dec);
    return 0;
}
