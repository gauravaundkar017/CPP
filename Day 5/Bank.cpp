/*
2:Create cpp application for bank account handling.
2.1. Create a class BankAccount -- acct no(int),customer name(string),balance(double)
Add  constr. (2 constrs : first to accept all details )

2.2 Add Business logic methods
Methods
public void withdraw(double amt) 
public void deposit(double amt)

2.3: Create object of account class and test withdraw and deposit methods.*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int acctNo;
    string customerName;
    double balance;

public:
    BankAccount(int acctNo, string customerName, double balance) {
        this->acctNo = acctNo;
        this->customerName = customerName;
        this->balance = balance;
    }

    void withdraw(double amt) {
        if (amt > 0 && amt <= balance) {
            balance -= amt;
            cout << "Withdrawal successful. Current balance: " << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    void deposit(double amt) {
        if (amt > 0) {
            balance += amt;
            cout << "Deposit successful. Current balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void display() {
        cout << "Account Number: " << acctNo << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(123456, "John Doe", 5000.0);

    cout << "Initial Account Details:" << endl;
    account.display();

    cout << "\nWithdrawing 2000:" << endl;
    account.withdraw(2000);

    cout << "\nDepositing 3000:" << endl;
    account.deposit(3000);

    cout << "\nFinal Account Details:" << endl;
    account.display();

    return 0;
}
