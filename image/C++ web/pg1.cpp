/* 1. Program to copy all elements of one array into another array */

#include <iostream>
using namespace std;

int main() {
    // Declare source and destination arrays
    int source[5] = {1, 2, 3, 4, 5};
    int destination[5];

    // Copy elements from source to destination
    for (int i = 0; i < 5; ++i) {
        destination[i] = source[i];
    }

    // Display elements of destination array
    cout << "Elements in the destination array after copying:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << destination[i] << " ";
    }
    cout << endl;

    return 0;
}


/* Output :

Elements in the destination array after copying:
1 2 3 4 5 
 */