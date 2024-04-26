#include<iostream>
using namespace std;
class Developer : public Employee{
	private :int numOfProject;
	        string projectName;
	public:Developer();
	       Developer(int empId, string name, double salary,int numOfProject , string projectName);
	       void developerTask();
	       void displayDeveloperDetails();
};
