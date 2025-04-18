//5. Write a C++ method to count the number of digits in an integer with the value 2. The integer may be assumed to be non-negative.

#include <iostream>
using namespace std;

int digit(int num)
{
    int count = 0;

    while (num > 0)
    {
        if (num % 10 == 2)
        {
            count++;
        }
        num /= 10;
    }
    return count;
}

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int twos = digit(num);
    cout << "The number of digits " << num << " that are equal to 2 is: " << twos << endl;

    return 0;
}
