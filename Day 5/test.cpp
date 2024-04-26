#include <iostream>
using namespace std;

class Employee{
private:
    int id;
    string name;
    int deptId;
protected:
    double basicSalary;
public:
    Employee(){
        id = 111;
        name = "Employee";
        deptId = 1;
        basicSalary = 100000;
    }
    Employee(int id, string name, int deptId, double basicSalary){
        this -> id = id;
        this -> name = name;
        this -> deptId = deptId;
        this -> basicSalary = basicSalary;
    }
    virtual double computeNetSalary(){
        cout << "Net Salary : ";
        return basicSalary;
    }
    void display(){
            cout << "Id : "<<id<<endl;
            cout << "name : "<<name<<endl;
            cout << "deptId : "<<deptId<<endl;
            cout << "basicSalary : "<<basicSalary<<endl;
        }
};

class Manager : public Employee{
private:
    double perfBonus;
public:
    Manager(){
        perfBonus = 10000;
    }
    Manager(int id, string name, int deptId, double basicSalary,double perfBonus) : Employee (id, name, deptId, basicSalary){
        this -> perfBonus = perfBonus;
    }
    void display(){
        Employee :: display();
        cout << "Performance Bonus : "<< perfBonus <<endl;
    }
    double computeNetSalary(){
        cout << "Net Salary : ";
        return this -> basicSalary + perfBonus;
    }
};

class Worker : public Employee{
private:
    double hoursWorked;
    double hourlyRate;
public:
    Worker(){
        hoursWorked = 9;
        hourlyRate = 1000;
    }
    Worker (int id, string name, int deptId, double basicSalary,double hoursWorked, double hourlyRate) : Employee (id, name, deptId, basicSalary){
        this -> hoursWorked = hoursWorked;
        this -> hourlyRate = hourlyRate;
    }
    void display(){
        Employee :: display();
        cout << "Hours Worked : "<< hoursWorked <<endl;
        cout << "Hourly Rate : "<< hourlyRate <<endl;
    }

    double getHourlyNet(){
        return hourlyRate;
    }
    
    double computeNetSalary(){
        cout << "Net Salary : ";
        return this -> basicSalary + (hoursWorked*hourlyRate);
    }
};

int main(){
    const int MAX_EMPLOYEES = 100;
    Employee* employees[MAX_EMPLOYEES];
    int employeeCount = 0 ;
    int choice;
    do
    {
        cout<<"1. Hire Manager"<<endl;
        cout<<"2. Hire Worker"<<endl;
        cout<<"3. Display information of all employees net salary"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter the choice : ";
        cin>>choice;
        string name;
        switch (choice)
        {
            case 1:
                int id, deptId;
                double perfBonus , basicSalary;
                cout << "Enter Manager ID: ";
                cin >> id;
                cout << "Enter Manager Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter Department ID: ";
                cin >> deptId;
                cout << "Enter Basic Salary: ";
                cin >> basicSalary;
                cout << "Enter Performance Bonus: ";
                cin >> perfBonus; 
                employees[employeeCount++] =  new Manager(id,name,deptId,basicSalary,perfBonus);
                break;
            
            case 2:
                int id1, deptId1;
                double basicSalary1, hoursWorked, hourlyRate;
                cout << "Enter Worker ID: ";
                cin >> id1;
                cout << "Enter Worker Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter Department ID: ";
                cin >> deptId1;
                cout << "Enter Basic Salary: ";
                cin >> basicSalary1;
                cout << "Enter Hours Worked: ";
                cin >> hoursWorked;
                cout << "Enter Hourly Rate: ";
                cin >> hourlyRate;
                employees[employeeCount++] =  new Worker(id1,name,deptId1,basicSalary1,hoursWorked,hourlyRate);
                break;

            case 3:
                cout << "Employee Net Salaries:" << endl;
                for (int  i = 0; i < employeeCount; i++)
                {
                    cout << "Employee ID: " << i << ", Net Salary: " << employees[i]->computeNetSalary() << endl;
                }
                break;

            case 4:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

    } while (choice != 4);

    for (int i = 0; i < employeeCount; ++i) {
        delete employees[i];
    }

    return 0;
}
