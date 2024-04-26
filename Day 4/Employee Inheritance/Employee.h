#include<iostream>
using namespace std;
class Employee{
	private :int empId;
	        string name;
	        double salary;
	public:Employee();
	       Employee(int empId,string name,double salary);
	       void calculateSalary();
	       void displayDetails();
};
