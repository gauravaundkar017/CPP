#include <iostream>
#include "../Employee/Employee.h"
using namespace std;

typedef EployeeClass :: Employee Employee;
namespace ManagerClass {
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
}