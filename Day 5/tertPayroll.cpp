#include <iostream>
using namespace std;

class Employee
{
private:
    int empId ;
    string name ;
protected : 
    int salary;
    
public:
    Employee (){
        empId = 000;
        name = "Employee";
        salary = 15000;
    }
    
    Employee (int empId,string name , int salary){
        this -> empId = empId;
        this -> name = name;
        this -> salary = salary;
    }
    virtual void display(){
        cout<<"Emp Id : "<<empId<<"\nName : "<<name<<"\nSalary : "<<salary<<endl;
    }
    virtual void calSalary(){
        cout<<"Employee Salary="<<salary<<endl;
    }

   
};

class Manager : public Employee{
private : 
    int incentives;
    string deptName;
public :
    Manager (){
        incentives = 1000;
        deptName = "CDAC";
    }
    
    Manager (int empId ,string name , int salary, int incentives, string deptName) : Employee (empId, name, salary){
        this -> incentives = incentives;
        this -> deptName = deptName;
   
    }
    void managerTask(){
        cout<<"Manager tasks list    "<<endl;
    }
    void display(){
        Employee :: display();
        cout<<"Manager Incemtives : "<< incentives << "\nDeparment Name : "<< deptName<<endl;
    }
    void calSalary(){
        cout<<"Manager Salary : "<< this->salary + incentives <<endl;
    }
    

};

class SalesPerson : public Employee{
private : 
    int pa,fa,ta;
public : 
    SalesPerson(){
        pa,fa,ta = 5000;
    }
    SalesPerson(int empId,string name,int salary,int pa,int fa,int ta):Employee(empId,name,salary)
	{
		this->pa=pa;
		this->fa=fa;
		this->ta=ta;
	}
    void display()
    {
        Employee :: display ();
     	cout<<"SalesPerson:"<<pa<<"   "<<ta<<"    "<<fa<<endl;
    }
    void calSalary(){
        cout<<"SalesPerson Salary : "<< this->salary + pa + fa + ta <<endl;

    }
    void targets()
	{
	    cout<<"SalesPerson Task "<<endl;	
	}


};




int main(){
    Employee e(100, "Anant", 200000);
    // e.display();

    Manager m(101, "Ambani", 300000, 65000, "Reliance");
    // m.display();
    // m.calSalary();

    SalesPerson sp(102, "Mukesh", 100000, 6500, 1000, 500);
    // sp.display();
    // sp.calSalary();  
    // sp.targets();

    Employee* allEmp [3];
    allEmp [0] = &e;
    allEmp [1] = &m;
    allEmp [2] = &sp;
    //  cout<<typeid(int).name();
    for (int i = 0; i < 3; i++)
    {
        // iacsd[i]->calSalary();
        // iacsd[i]->display();
        // cout<<"Data type of index "<< i << typeid *iacsd[i].na <<endl;
        if (typeid(*allEmp[i])==typeid(Employee))
        {
            cout<<"Employee type type at idex:"<<i<<endl;;
        cout<<"------------------"<<endl;  
        }
        if (typeid(*allEmp[i])==typeid(Manager))
        {
            cout<<"Manager type type at idex:"<<i<<endl;
            Manager* mObj = dynamic_cast<Manager*>(allEmp[i]);  
            mObj -> managerTask();
            cout<<"------------------"<<endl;  
        }
        if (typeid(*allEmp[i]) == typeid(SalesPerson))
        {
            cout << "SalesPerson type at iindex : "<<i<<endl;
            SalesPerson* spObj = dynamic_cast<SalesPerson*>(allEmp[i]);
            spObj ->targets();
        }
        

        
        


    }
    


    


    return 0;
}
