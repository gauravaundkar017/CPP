#include <iostream>
#include "Employee.h"
using namespace std;


Employee :: Employee(){
	cout<<"---default---Employee----"<<endl;
	this -> empId = 0;
	this -> name = "No name";
	this -> salary = 10000;
	cout<<"---------------------------"<<endl;
	
}
Employee :: Employee(int empId, string name, double salary){
	cout<<"------parameter Employee-----"<<endl;
	this -> empId = empId;
	this -> name = name;
	this -> salary = salary;
	cout<<"---------------------------"<<endl;
	
}

void Employee :: calculateSalary(){
	cout<<"Salary Of Employee "<<salary<<endl;
}
void Employee :: displayDetails(){
	cout<<"----employe displayDetails----"<<endl;
	cout<<"Id of Employee : " << empId << endl;
	cout<<"Name of Employee : " << name << endl;
	cout<<"Salary of Employee : " << salary << endl;
	
}

