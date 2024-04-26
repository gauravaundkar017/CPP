/*Employee Inheritance:
Problem Statement: Build a system for managing employees. Create a base class Employee with attributes 
such as name, employee ID, and salary. Then, derive classes like Manager and Developer,
each with its own attributes and methods. Implement a common method, like calculate_salary(), in the base class.*/
 

#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Developer.h"
using namespace std;

int main(){
//	Employee e1;
//	e1.displayDetails();
//	e1.calculateSalary();
//	cout<<"_________"<<endl;
//	Employee e2(101,"Thor",152000);\
//	e2.displayDetails();
//	cout<<"  "<<endl;
//	cout<<"  "<<endl;
	
//	Manager m1;
//	m1.managerTask();
//	m1.displayDetails();
//	
//	cout<<"  "<<endl;
//	cout<<"  "<<endl;
//	
//	Manager m2(105,"Iron Man", 150000, 7, 10 );
//	m2.calculateSalary();
//	m2.displayDetails();
//	m2.managerTask();
//	m2.displayManagerDetails();

	
	Developer d1;
	d1.calculateSalary();
	
	Developer d2(107,"Hulk", 15000, 10, "Green Project");
	d2.developerTask();
	d2.displayDetails();
	d2.displayDeveloperDetails();
	
	return 0;
	
}
