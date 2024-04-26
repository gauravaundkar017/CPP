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

class BankException{
    public:
        string message;
        BankException(string message){
            this->message = message;
        }
};


class Bank
{
private:
    int accNo ;
    string name;
    double balance;
public:
    Bank () : accNo(0), name("No user"), balance(0){}

    Bank(int accNo, string name, double balance) : accNo(accNo), name(name), balance(balance){}

    void withdraw(double amt) {
        if (balance>0 && balance >= amt)
        {
            /* code */
            balance -= amt;
            cout<<"Balance : "<<balance<<endl;
        }else{
            throw BankException("Insufficient Balace");
        }
        
    }
    void addAmt(double amt){

        if (amt > 0)
        {
            balance += amt;
            cout<<"Amount added successfully Balance : "<<balance<<endl;
            
        }
        
        
    }

};

int main(){
    try{
        Bank b(1111, "gaur", 1000);
        // b.withdraw(5000);
        b.addAmt(5000);


    }catch (BankException &e ){
        cout << "Excepetion : "<<e.message<<endl;
    }

    return 0;
}


