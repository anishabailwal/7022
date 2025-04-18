/* 4. Write a C++ program to create an abstract class BankAccount with abstract methods deposit() 
and withdraw(). Create derived classes: SavingsAccount and CurrentAccount that extend the BankAccount 
class and implement the respective methods to handle deposits and withdrawals for each account type. */

#include <iostream>
using namespace std;

class BankAccount {
public:
    virtual void deposit(float amount) = 0;
    virtual void withdraw(float amount) = 0;
};

class SavingsAccount : public BankAccount {
public:
    float balance = 0.0;

    void deposit(float amount)  {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited in Savings Account: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(float amount)  {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn from Savings Account: " << amount << endl;
        } else {
            cout << "Invalid withdraw amount or insufficient funds!" << endl;
        }
    }
};

class CurrentAccount : public BankAccount {
public:
    float balance = 0.0;

    void deposit(float amount) override {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited in Current Account: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(float amount) override {
        if (amount > 0) {
            balance -= amount;
            cout << "Withdrawn from Current Account: " << amount << endl;
        } else {
            cout << "Invalid withdraw amount!" << endl;
        }
    }
};

int main() {
    SavingsAccount savings;
    savings.deposit(1000);
    savings.withdraw(500);
    cout << "Savings Account Balance: " << savings.balance << endl;

    CurrentAccount current;
    current.deposit(2000);
    current.withdraw(1500);
    cout << "Current Account Balance: " << current.balance << endl;

    cout << "\nAttempting to withdraw more than balance from Savings Account:\n";
    savings.withdraw(600);

    cout << "\nAttempting to withdraw from Current Account:\n";
    current.withdraw(600);

    return 0;
}

/* Output : 

Deposited in Savings Account: 1000
Withdrawn from Savings Account: 500
Savings Account Balance: 500

Deposited in Current Account: 2000
Withdrawn from Current Account: 1500
Current Account Balance: 500

Attempting to withdraw more than balance from Savings Account:
Invalid withdraw amount or insufficient funds!

Attempting to withdraw from Current Account:
Withdrawn from Current Account: 600

 */