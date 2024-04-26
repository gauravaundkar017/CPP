/*Employee Payroll System with Abstract Classes:
Problem Statement: Design an employee payroll system. Create an abstract class Employee with attributes like name and employee ID. Derive concrete classes like HourlyEmployee and SalariedEmployee. Define abstract methods for calculating pay in the base class and implement them in the derived classes.*/

#include <iostream>
#include <string>

using namespace std;

// Abstract base class Employee
class Employee {
protected:
    string name;
    int employeeID;
public:
    Employee(string name, int employeeID) : name(name), employeeID(employeeID) {}

    // Pure virtual function to calculate pay
    virtual double calculatePay() const = 0;

    // Method to display employee information
    void display() const {
        cout << "Name: " << name << ", Employee ID: " << employeeID << ", Pay: $" << calculatePay() << endl;
    }

    virtual ~Employee() {}
};

// Derived class for hourly employees
class HourlyEmployee : public Employee {
private:
    double hourlyRate;
    double hoursWorked;
public:
    HourlyEmployee(string name, int employeeID, double hourlyRate, double hoursWorked) : Employee(name, employeeID), hourlyRate(hourlyRate), hoursWorked(hoursWorked) {}

    // Override calculatePay method for hourly employees
    double calculatePay() const override {
        return hourlyRate * hoursWorked;
    }
};

// Derived class for salaried employees
class SalariedEmployee : public Employee {
private:
    double salary;
public:
    SalariedEmployee(string name, int employeeID, double salary) : Employee(name, employeeID), salary(salary) {}

    // Override calculatePay method for salaried employees
    double calculatePay() const override {
        return salary;
    }
};

int main() {
    // Creating instances of HourlyEmployee and SalariedEmployee
    HourlyEmployee hourlyEmp("John", 101, 15.50, 40); // $15.50 hourly rate, 40 hours worked
    SalariedEmployee salariedEmp("Alice", 102, 5000); // $5000 salary

    // Displaying employee information
    cout << "Hourly Employee:" << endl;
    hourlyEmp.display();
    cout << endl;

    cout << "Salaried Employee:" << endl;
    salariedEmp.display();

    return 0;
}
