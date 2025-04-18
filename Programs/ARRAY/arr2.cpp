// 2. Program to find the frequency of each element in the array

#include<iostream>
using namespace std;

int main() {
    int arr[5], i, j, c;
    cout << "Enter 5 elements of array : " << endl;
    for (i = 0; i < 5; i++) {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << endl << "Frequency of numbers : " << endl;
    for (i = 0; i < 5; i++) {
        c = 1; 
        if (arr[i] != -1) { 
            for (j = i + 1; j < 5; j++) {
                if (arr[i] == arr[j]) {
                    c++;
                    arr[j] = -1; 
                }
            }
            cout << "Frequency of " << arr[i] << " : " << c << endl;
        }
    }
    return 0;
}

/*
Enter 5 elements of array :
Enter element 1 : 1
Enter element 2 : 2
Enter element 3 : 3
Enter element 4 : 2
Enter element 5 : 1

Frequency of numbers :
Frequency of 1 : 2
Frequency of 2 : 2
Frequency of 3 : 1
*/
