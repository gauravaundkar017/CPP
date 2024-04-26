#include <iostream>
#include "Employee.h"
#include "Developer.h"
using namespace std;


Developer :: Developer(){
	cout<<"---default---Developer----"<<endl;
	this -> numOfProject = 0;
	this -> projectName = "Demo Project";
	cout<<"---------------------------"<<endl;
	
}
Developer :: Developer(int empId, string name, double salary, int numOfProject, string projectName) : Employee (empId, name, salary){
	cout<<"------parameter Developer-----"<<endl;
	this -> numOfProject = numOfProject;
	this -> projectName = projectName;
	cout<<"---------------------------"<<endl;
	
}

void Developer :: developerTask(){
	cout<<"Developer Task List "<<endl;
}

void Developer :: displayDeveloperDetails(){

	cout<<"----Developer displayDetails----"<<endl;
	cout<<"Number Of Project of Developer : " << numOfProject << endl;
	cout<<"Project Name of Developer : " << projectName << endl;

}


