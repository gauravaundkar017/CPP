/*
Employee Inheritance:
Problem Statement: Build a system for managing employees. Create a base class Employee with attributes such as name, employee ID, and salary. Then, derive classes like Manager and Developer, each with its own attributes and methods. Implement a common method, like calculate_salary(), in the base class.*/
#include <iostream>
#include <string>

using namespace std;

// Base class Employee
class Employee {
protected:
    string name;
    int employeeID;
    double salary;
public:
    Employee(string name, int employeeID, double salary) : name(name), employeeID(employeeID), salary(salary) {}

    // Common method for calculating salary (virtual function)
    virtual double calculate_salary() const {
        return salary;
    }

    virtual ~Employee() {}
};

// Derived class Manager
class Manager : public Employee {
private:
    double bonusPercentage;
public:
    Manager(string name, int employeeID, double salary, double bonusPercentage) : Employee(name, employeeID, salary), bonusPercentage(bonusPercentage) {}

    // Overriding calculate_salary method for managers
    double calculate_salary() const override {
        return salary + (salary * bonusPercentage / 100);
    }
};

// Derived class Developer
class Developer : public Employee {
private:
    double overtimeHours;
    double hourlyRate;
public:
    Developer(string name, int employeeID, double salary, double overtimeHours, double hourlyRate) : Employee(name, employeeID, salary), overtimeHours(overtimeHours), hourlyRate(hourlyRate) {}

    // Overriding calculate_salary method for developers
    double calculate_salary() const override {
        return salary + (overtimeHours * hourlyRate);
    }
};

int main() {
    // Creating instances of Manager and Developer
    Manager manager("John", 101, 5000, 10); // 10% bonus
    Developer developer("Alice", 102, 4000, 5, 20); // 5 overtime hours, $20 hourly rate

    // Calculating and displaying salaries
    cout << "Manager's Salary: $" << manager.calculate_salary() << endl;
    cout << "Developer's Salary: $" << developer.calculate_salary() << endl;

    return 0;
}
