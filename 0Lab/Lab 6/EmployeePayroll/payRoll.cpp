#include <iostream>
using namespace std;
// #include "./Worker/Worker.h"
// #include "./Manager/Manager.h"

// typedef EployeeClass :: Employee Employee;
// typedef ManagerClass :: Manager Manager;
// typedef WorkerClass :: Worker Worker;

class Employee
    {
    private:
        int empId;
        string name ;
        int depId;
        static int counter;
    protected :
        double basicSalary;
    public:
        Employee(){
            empId = 100;
            name = "Employee";
            depId = 111;
            basicSalary = 10000;
            counter ++;
        }

        Employee(int empId, string name, int deptId, double basicSalary) : empId(empId), name(name), depId(depId), basicSalary(basicSalary){
            counter ++;
        }

        static void totalEmployees(){
            cout<<"Total Number of Employee =  "<<counter;
        }

        virtual void display(){
            cout<<"Emp Id : "<<empId<<"\nName : "<<name<<"\nDept Id : "<<depId<<"\nBasic Salary : "<<basicSalary<<endl;
        }
        virtual double computeNetSalary(){

            return basicSalary;
        }

       
    };

    int Employee :: counter = 0;


    class Manager : public Employee {
        private : 
            double performanceBonus;
        
        public : 
            Manager(){
                performanceBonus = 1000;

            }
            Manager(int empId, string name, int deptId, double basicSalary, double performanceBonus) : Employee(empId, name, deptId, basicSalary) , performanceBonus(performanceBonus){

            }
            void display(){
                Employee :: display();
                cout<<"Perfomance Bonus = "<<performanceBonus<<endl;
            }
            double computeNetSalary(){

                return basicSalary + performanceBonus;
            }
            void mangerTasks(){
                cout<<"======Manager Tasks List======"<<endl;
            }

    };



    class Worker : public Employee {
        private : 
            int hoursWorked, hourlyRate;
        
        public : 
            Worker(){
                hoursWorked = 6;
                hourlyRate = 5000;
            }
            Worker(int empId, string name, int deptId, double basicSalary, int hoursWorked,int hourlyRate) : Employee(empId, name, deptId, basicSalary) , hoursWorked(hoursWorked) ,hourlyRate(hourlyRate){

            }
            void display(){
                Employee :: display();
                cout<<"Hours Worked = "<<hoursWorked<<endl;
                cout<<"Hourly Rate = "<<hourlyRate<<endl;
            }
            double computeNetSalary(){

                return basicSalary + (hoursWorked*hourlyRate);
            }

            void workerTasks(){
                cout<<"======Worker Tasks List======"<<endl;
            }

    };

int main(){
    // Employee* employees[5];
    // Employee e;
    // e.display();
    Manager m(101, "gaurav", 701, 100000, 5000 );
    m.display();
    cout<<"Net Salary : "<<m.computeNetSalary()<<endl;
    


    cout<<"====================================="<<endl;

    Worker w(101, "gaurav", 701, 100000, 50, 1000);
    w.display();
    cout<<"Net Salary : "<<w.computeNetSalary()<<endl;
    


    


    Employee :: totalEmployees();
    
    return 0; 
}