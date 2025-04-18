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
    BankAccount account(200.0); 

    cout << "Initial balance: $" << account.getBalance() << endl;

    account.deposit(50.0);
    account.withdraw(150.0);
    account.withdraw(100.0);
    account.withdraw(50.0);

    cout << "Final balance: $" << account.getBalance() << endl;

    return 0;
}

// ----- OUTPUT -----
// Intial balance: $200
// Deposited: $50
// Withdrawn: $150
// Withdrawal failed. Minimum balance of $100 must be maintained.
// Withdrawal failed. Minimum balance of $100 must be maintained.
// Final balance: $100