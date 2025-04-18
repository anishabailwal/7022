// 5. Write a C++ program to create a class known as "BankAccount" with methods called deposit() and withdraw(). Create a derived class called SavingsAccount that overrides the withdraw() method to prevent withdrawals if the account balance falls below one hundred.

#include <iostream>
using namespace std;

class BankAccount
{
protected:
    double balance;

public:
    BankAccount(double initial_balance = 0.0) : balance(initial_balance) {}

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
    }

    void withdraw(double amount)
    {
        if (balance - amount >= 100.0)
        {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        }
        else
        {
            cout << "Withdrawal failed. Minimum balance of $100 must be maintained." << endl;
        }
    }

    double getBalance() const
    {
        return balance;
    }
};

int main()
{
    int ch = 0;
    double in_amt, d_amt, w_amt;

    cout << "Enter initial amount to be deposited to open a bank account: ";
    cin >> in_amt;
    BankAccount account(in_amt);

    do
    {
        cout << "\n----- MENU -----";
        cout << "\n1. DEPOSIT";
        cout << "\n2. WITHDRAW";
        cout << "\n3. EXIT";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Amount to be deposited: ";
            cin >> d_amt;
            account.deposit(d_amt);
            break;
        case 2:
            cout << "Amount to be withdrawn: ";
            cin >> w_amt;
            account.withdraw(w_amt);
            break;
        case 3:
            cout << "Exiting...";
            break;
        default:
            cout << "Invalid choice!";
        }
    } while (ch != 3);

    cout << "Final balance: $" << account.getBalance() << endl;

    return 0;
}

// ----- OUTPUT -----
