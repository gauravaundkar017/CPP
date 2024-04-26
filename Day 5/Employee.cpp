/*1 Solve this.
Fresh business scenario to apply inheritance , polymorphism   to emp based organization scenario.
Create Emp based organization structure --- Emp , Mgr , Worker

1.1 Emp state--- id(int), name, deptId , basicSalary(double)
Accept all of above in constructor arguments.

Methods ---
1.2. compute net salary ---ret 0
(eg : public double computeNetSalary(){return 0;})

1.2 Mgr state  ---id,name,basic,deptId , perfBonus
Add suitable constructor
Methods ----
1. compute net salary (formula: basic+perfBonus) -- override computeNetSalary


1.3 Worker state  --id,name,basic,deptId,hoursWorked,hourlyRate
Methods : 
1.  compute net salary (formula:  = basic+(hoursWorked*hourlyRate) --override computeNetSalary
2. get hrlyRate of the worker  -- add a new method to return hourly rate of a worker.(getter)

Create suitable array to store organization details.
Provide following options
1. Hire Manager
I/P : all manager details

2. Hire Worker  
I/P : all worker details

3. Display information of all employees net salary (by invoking computeNetSal), 

4. Exit*/


#include <iostream>
using namespace std;

class Employee{
    // Emp state--- id(int), name, deptId , basicSalary(double)
    private : 
        int id;
        string name;
        int deptId;
    protected :
        double  basicSalary;
    public : 
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
        void display(){
            cout << "Id : "<<id<<endl;
            cout << "name : "<<name<<endl;
            cout << "deptId : "<<deptId<<endl;
            cout << "basicSalary : "<<basicSalary<<endl;
        }
        double computeNetSalary(){
            cout << "Net Salary : ";
            return basicSalary;
        }

};

class Manager : public Employee{
    //id,name,basic,deptId , perfBonus
    private : 
        double perfBonus;
    public : 
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


/*1.3 Worker state  --id,name,basic,deptId,hoursWorked,hourlyRate
Methods : 
1.  compute net salary (formula:  = basic+(hoursWorked*hourlyRate) --override computeNetSalary
2. get hrlyRate of the worker  -- add a new method to return hourly rate of a worker.(getter)*/

class Worker : public Employee{
    private :
        double hoursWorked;
        double hourlyRate;

    public :
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
        

        virtual double computeNetSalary(){
            cout << "Net Salary : ";
            return this -> basicSalary + (hoursWorked*hourlyRate);
            cout << endl;
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
             name;
            double perfBonus , basicSalary;
            cout << "Enter Manager ID: ";
            cin >> id;
            cout << "Enter Manager Name: ";
            cin >> name;
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
             name;
            double basicSalary1, hoursWorked, hourlyRate;
            cout << "Enter Worker ID: ";
            cin >> id1;
            cout << "Enter Worker Name: ";
            cin >> name;
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

        case 3 :
            cout << "Employee Net Salaries:" << endl;
            

            for (int  i = 0; i < employeeCount; i++)
            {
                cout << "Employee ID: " << employees[i]<< employees[i]->computeNetSalary() << endl;

                // employees[i]->display();
                cout<<employees[i]->computeNetSalary()<<endl;
                // cout << "Employee ID: " << employees[i] <<", Net Salary: " << employees[i]->computeNetSalary() << endl;
            }

            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
            
        }

    } while (choice != 4);
    for (int i = 0; i < employeeCount; ++i) {
        delete employees[i];
    }
     

    // Employee e;
    // e.display();
    // cout<<e.computeNetSalary();
    // cout<<"\n__________"<<endl;
    
    // Manager m(1,"Thor",7,100520,12000);
    // m.display();
    // cout<<m.computeNetSalary();
    // cout<<"\n__________"<<endl;

    // Worker w(1,"Thor",7,100520,5,10000);
    // w.display();
    // cout<<w.computeNetSalary();



    return 0;
}