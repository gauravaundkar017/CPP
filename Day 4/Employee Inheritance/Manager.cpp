#include <iostream>
#include "Employee.h"
#include "Manager.h"
using namespace std;


Manager :: Manager(){
	cout<<"---default---Manager----"<<endl;
	this -> deparmentNum = 0;
	this -> incantive = 10000;
	cout<<"---------------------------"<<endl;
	
}
Manager :: Manager(int empId, string name, double salary, int deparmentNum, double incantive) : Employee (empId, name, salary){
	cout<<"------parameter Manager-----"<<endl;
	this -> deparmentNum = deparmentNum;
	this -> incantive = incantive;
	cout<<"---------------------------"<<endl;
	
}

void Manager :: managerTask(){
	cout<<"Manager Task List "<<endl;
}

void Manager ::  displayManagerDetails(){
	cout<<"----Manager displayDetails----"<<endl;
	cout<<"Department of Manager : " << deparmentNum << endl;
	cout<<"incantive of Manager : " << incantive << endl;
}


