#include <iostream>
#include <map>
#include <string>

using namespace std;

class Account
{
private:
    string accountNumber;
    string customerName;
    double balance;

public:
    // Constructor
    Account(string accNum, string name, double initialBalance)
    {
        accountNumber = accNum;
        customerName = name;
        balance = initialBalance;
    }

    // Method to deposit money
    void deposit(double amount)
    {
        balance += amount;
    }

    // Method to withdraw money
    bool withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            return true; // Withdrawal successful
        }
        return false; // Insufficient balance
    }

    // Getter method for account balance
    double getBalance()
    {
        return balance;
    }

    // Getter method for account number
    string getAccountNumber()
    {
        return accountNumber;
    }

    // Getter method for customer name
    string getCustomerName()
    {
        return customerName;
    }
};

class Bank
{
private:
    map<string, Account> accounts;

public:
    // Method to add an account
    void addAccount(string accNum, string name, double initialBalance)
    {
        Account acc(accNum, name, initialBalance);
        accounts.insert({accNum, acc});
    }

    // Method to remove an account
    void removeAccount(string accountNumber)
    {
        auto it = accounts.find(accountNumber);
        if (it != accounts.end())
        {
            accounts.erase(it);
            cout << "Account " << accountNumber << " removed from the bank." << endl;
        }
        else
        {
            cout << "Account " << accountNumber << " not found in the bank." << endl;
        }
    }
};

int main()
{
    Bank bank;

    char choice;
    do
    {
        cout << "Enter operation (a: add account, r: remove account, q: quit): ";
        cin >> choice;
        cin.ignore();

        if (choice == 'a')
        {
            string accountNumber, customerName;
            double initialBalance;

            cout << "Enter account number: ";
            getline(cin, accountNumber);

            cout << "Enter customer name: ";
            getline(cin, customerName);

            cout << "Enter initial balance: ";
            cin >> initialBalance;

            bank.addAccount(accountNumber, customerName, initialBalance);
        }
        else if (choice == 'r')
        {
            string accountNumber;

            cout << "Enter account number to remove: ";
            getline(cin, accountNumber);

            bank.removeAccount(accountNumber);
        }
    } while (choice != 'q');

    return 0;
}