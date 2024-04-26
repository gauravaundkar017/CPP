/*Bank Account Inheritance:
Problem Statement: Design a system for managing bank accounts. Create a base class BankAccount with attributes like account number and balance. Derive classes like SavingsAccount and CheckingAccount, each with specialized methods like withdraw() and calculate_interest().*/
#include <iostream>

using namespace std;

// Base class BankAccount
class BankAccount {
protected:
    string accountNumber;
    double balance;
public:
    BankAccount(string accountNumber, double balance) : accountNumber(accountNumber), balance(balance) {}

    // Method to deposit money into the account
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful." << endl;
    }

    // Virtual method to withdraw money from the account
    virtual void withdraw(double amount) = 0;

    // Method to display account information
    virtual void display() const {
        cout << "Account Number: " << accountNumber << ", Balance: $" << balance << endl;
    }

    virtual ~BankAccount() {}
};

// Derived class SavingsAccount inheriting from BankAccount
class SavingsAccount : public BankAccount {
private:
    double interestRate;
public:
    SavingsAccount(string accountNumber, double balance, double interestRate) : BankAccount(accountNumber, balance), interestRate(interestRate) {}

    // Method to calculate and add interest to the account
    void calculate_interest() {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest of $" << interest << " added to the account." << endl;
    }

    // Method to withdraw money from the savings account
    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        } else {
            cout << "Insufficient balance for withdrawal." << endl;
        }
    }

    // Method to display account information, overriding the base class method
    void display() const override {
        cout << "Savings Account ";
        BankAccount::display();
    }
};

// Derived class CheckingAccount inheriting from BankAccount
class CheckingAccount : public BankAccount {
private:
    double overdraftLimit;
public:
    CheckingAccount(string accountNumber, double balance, double overdraftLimit) : BankAccount(accountNumber, balance), overdraftLimit(overdraftLimit) {}

    // Method to withdraw money from the checking account
    void withdraw(double amount) override {
        if (amount <= balance + overdraftLimit) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        } else {
            cout << "Exceeded overdraft limit. Withdrawal not allowed." << endl;
        }
    }

    // Method to display account information, overriding the base class method
    void display() const override {
        cout << "Checking Account ";
        BankAccount::display();
    }
};

int main() {
    // Creating instances of SavingsAccount and CheckingAccount
    SavingsAccount savings("SA123", 1000, 5); // Account number, initial balance, interest rate
    CheckingAccount checking("CA456", 2000, 500); // Account number, initial balance, overdraft limit

    // Displaying initial account information
    savings.display();
    checking.display();
    cout << endl;

    // Performing operations on accounts
    savings.deposit(200);
    savings.calculate_interest();
    savings.withdraw(300);

    checking.deposit(500);
    checking.withdraw(2500);

    // Displaying updated account information
    savings.display();
    checking.display();

    return 0;
}
