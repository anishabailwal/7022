#include <iostream>

using namespace std;

class BankAccount
{
private:
    int accountNumber;
    double balance;

public:
    // Setter methods
    void setAccountNumber(int _accountNumber)
    {
        accountNumber = _accountNumber;
    }

    void setBalance(double _balance)
    {
        balance = _balance;
    }

    // Getter methods
    int getAccountNumber() const
    {
        return accountNumber;
    }

    double getBalance() const
    {
        return balance;
    }

    // Additional setter and getter methods to access and modify variables directly
    void setAccountDetails(int _accountNumber, double _balance)
    {
        accountNumber = _accountNumber;
        balance = _balance;
    }

    void getAccountDetails(int &_accountNumber, double &_balance) const
    {
        _accountNumber = accountNumber;
        _balance = balance;
    }
};

int main()
{
    // Create a BankAccount object
    BankAccount account;

    // Get input from user for account details
    int accountNumber;
    double balance;

    cout << "Enter account number: ";
    cin >> accountNumber;

    cout << "Enter balance: ";
    cin >> balance;

    // Set account details using setter methods
    account.setAccountNumber(accountNumber);
    account.setBalance(balance);

    // Display account details using getter methods
    cout << "\nAccount Details (Using Getter Methods):" << endl;
    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Balance: " << account.getBalance() << endl;

    // Access and modify variables directly using additional setter and getter methods
    int newAccountNumber;
    double newBalance;

    cout << "\nEnter new account number: ";
    cin >> newAccountNumber;

    cout << "Enter new balance: ";
    cin >> newBalance;

    // Set account details using additional setter method
    account.setAccountDetails(newAccountNumber, newBalance);

    // Get account details using additional getter method
    int retrievedAccountNumber;
    double retrievedBalance;
    account.getAccountDetails(retrievedAccountNumber, retrievedBalance);

    // Display modified account details
    cout << "\nModified Account Details (Using Additional Setter and Getter Methods):" << endl;
    cout << "Account Number: " << retrievedAccountNumber << endl;
    cout << "Balance: " << retrievedBalance << endl;

    return 0;
}
