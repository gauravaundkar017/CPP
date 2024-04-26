#include <iostream>
#include "../Employee/Employee.h"
using namespace std;

typedef EployeeClass :: Employee Employee;
namespace WorkerClass {
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
}