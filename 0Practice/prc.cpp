#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee {
protected:
    int empId;
    string name;
    int depId;
    static int counter;
protected:
    double basicSalary;

public:
    Employee() : empId(110), name("Employee"), depId(11), basicSalary(10000) {
        counter++;
    }

    Employee(int empId, string name, int depId, double basicSalary) : empId(empId), name(name), depId(depId), basicSalary(basicSalary) {
        counter++;
    }

    static void totalEmployees() {
        cout << "Total Number of Employee is " << counter << endl;
    }

    virtual void display() {
        cout << "Emp Id : " << empId << "\nName : " << name << "\nDept Id : " << depId << "\nBasic Salary : " << basicSalary << endl;
    }

    virtual double computeNetSalary() {
        return basicSalary;
    }

    int getEmpId() {
        return empId;
    }

    ~Employee() {
        cout << "\nI am Destructor" << endl;
    }
};

int Employee::counter = 0;

class Manager : public Employee {
private:
    double performanceBonus;

public:
    Manager() : performanceBonus(1000) {}

    Manager(int empId, string name, int deptId, double basicSalary, double performanceBonus) : Employee(empId, name, deptId, basicSalary), performanceBonus(performanceBonus) {}

    void display() {
        Employee::display();
        cout << "Perfomance Bonus = " << performanceBonus << endl;
    }

    double computeNetSalary() {
        return basicSalary + performanceBonus;
    }

    void mangerTasks() {
        cout << "======Manager Tasks List======" << endl;
    }

    void testOfEmployee() {
        cout << "Manager Pass manager related exam " << endl;
    }
};

class Worker : public Employee {
private:
    int hoursWorked, hourlyRate;

public:
    Worker() : hoursWorked(6), hourlyRate(5000) {}

    Worker(int empId, string name, int deptId, double basicSalary, int hoursWorked, int hourlyRate) : Employee(empId, name, deptId, basicSalary), hoursWorked(hoursWorked), hourlyRate(hourlyRate) {}

    void display() {
        Employee::display();
        cout << "Hours Worked = " << hoursWorked << endl;
        cout << "Hourly Rate = " << hourlyRate << endl;
    }

    double computeNetSalary() {
        return basicSalary + (hoursWorked * hourlyRate);
    }

    void workerTasks() {
        cout << "======Worker Tasks List======" << endl;
    }

    int getHourlyRate() {
        return hourlyRate;
    }

    void testOfEmployee() {
        cout << "Worker Pass Worker related exam " << endl;
    }
};

void menu() {
    cout << "\n1. Hire Employee" << endl;
    cout << "2. Hire Manager" << endl;
    cout << "3. Hire Worker" << endl;
    cout << "4. Display information of all employees net salary" << endl;
    cout << "5. Show Employee specific Task" << endl;
    cout << "6. Search Employee by id" << endl;
    cout << "7. Net Salary greater than specific amount" << endl;
    cout << "8. Copy Constructor (Make copy of details)" << endl;
    cout << "9. Exit\n" << endl;
    cout << "Enter your choice : ";
}

int main() {

    vector<Employee*> employees;
    int ch, maxSize = 100;
    // Employee* Employees[maxSize];
    int empId, id, indexOfEmployee;
    string name;
    int deptId ; 
    double basicSalary, performanceBonus, specificAmount;
    int hoursWorked, hourlyRate;
    int empCount = 0;
    bool found ;
    do {
        menu();
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "--------Input all Employee details-------" << endl;
                cout << "empId   name    deptId    basicSalary   " << endl;
                
                cin >> empId >> name >> deptId >> basicSalary;
                employees.push_back(new Employee(empId, name, deptId, basicSalary));
                cout << "--------------------------------" << endl;
                break;

            case 2:
                cout << "--------Input all manager details-------" << endl;
                cout << "empId   name    deptId    basicSalary    performanceBonus" << endl;
                cin >> empId >> name >> deptId >> basicSalary >> performanceBonus;
                employees.push_back(new Manager(empId, name, deptId, basicSalary, performanceBonus));
                cout << "--------------------------------" << endl;
                break;

            case 3:
                cout << "--------Input all Workers details-------" << endl;
                cout << "empId   name    deptId    basicSalary    hoursWorked   hourlyRate  " << endl;
              
                cin >> empId >> name >> deptId >> basicSalary >> hoursWorked >> hourlyRate;
                employees.push_back(new Worker(empId, name, deptId, basicSalary, hoursWorked, hourlyRate));
                cout << "--------------------------------" << endl;
                break;

            case 4:
                cout << "------Employee Details--------" << endl;
                for (Employee* emp : employees) {
                    emp->display();
                    cout << "Salary of " << typeid(*emp).name() << " : " << emp->computeNetSalary() << endl;
                    cout << "---------------------------" << endl;
                }
                cout << "------------------------------" << endl;
                break;

            case 5:
                cout << "------Show Employee specific Task--------" << endl;
                for (Employee* emp : employees) {
                    if (typeid(*emp) == typeid(Manager)) {
                        cout << "Employee is " << typeid(*emp).name() << ". " << endl;
                        Manager* m = dynamic_cast<Manager*>(emp);
                        m->mangerTasks();
                    }
                    else if (typeid(*emp) == typeid(Worker)) {
                        cout << "Employee is " << typeid(*emp).name() << ". " << endl;
                        Worker* w = dynamic_cast<Worker*>(emp);
                        w->workerTasks();
                    }
                    cout << "---------------------------" << endl;
                }
                break;

            case 6:
                cout << "Search by Employee Id : " << endl;
                cout << "Enter Employee Id : ";
 
                cin >> id;
                found = false;
                for (Employee* emp : employees) {
                    if (emp->getEmpId() == id) {
                        found = true;
                        if (typeid(*emp) == typeid(Manager)) {
                            cout << "Employee is Manager and he is present" << endl;
                        }
                        else if (typeid(*emp) == typeid(Worker)) {
                            cout << "Employee is Worker and he is present" << endl;
                        }
                        else if (typeid(*emp) == typeid(Employee)) {
                            cout << "Employee is present" << endl;
                        }
                        break;
                    }
                }
                if (!found) {
                    cout << "Employee with id : " << id << " is not present." << endl;
                }
                break;

            case 7:
                cout << "Net salary greater than specific amount" << endl;
                cout << "Enter specific amount : ";
     
                cin >> specificAmount;
                for (Employee* emp : employees) {
                    if (emp->computeNetSalary() >= specificAmount) {
                        emp->display();
                        cout << "Net Salary of " << typeid(*emp).name() << " is " << emp->computeNetSalary() << endl;
                    }
                }
                break;

            case 8:
                cout << "Copy Constructor (Make copy of details)" << endl;
                if (!employees.empty()) {
                    cout << "Enter the index of the employee to copy :\nWhere index start from 0 and ends at " << employees.size() - 1 << " : ";
                    int indexOfEmployee;
                    cin >> indexOfEmployee;
                    if (indexOfEmployee < employees.size() && indexOfEmployee >= 0) {
                        if (typeid(*employees[indexOfEmployee]) == typeid(Manager)) {
                            employees.push_back(new Manager(*dynamic_cast<Manager*>(employees[indexOfEmployee])));
                            cout << "Manager copied successfully." << endl;
                        }
                        else if (typeid(*employees[indexOfEmployee]) == typeid(Worker)) {
                            employees.push_back(new Worker(*dynamic_cast<Worker*>(employees[indexOfEmployee])));
                            cout << "Worker copied successfully." << endl;
                        }
                        else {
                            employees.push_back(new Employee(*employees[indexOfEmployee]));
                            cout << "Employee copied successfully." << endl;
                        }
                    }
                    else {
                        cout << "Invalid Index" << endl;
                    }
                }
                else {
                    cout << "No employee to copy." << endl;
                }
                break;

            case 9:
                cout << "Exiting...." << endl;
                break;

            default:
                cout << "Please enter correct choice" << endl;
                break;
        }
    } while (ch != 9);

    // cout<<employees.size();
    Employee::totalEmployees();


    for (Employee* emp : employees) {
        delete emp;
    }

    return 0;
}
