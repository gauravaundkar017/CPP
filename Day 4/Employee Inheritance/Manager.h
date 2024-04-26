#include<iostream>
using namespace std;
class Manager : public Employee{
	private :int deparmentNum;
	        double incantive;
	public:Manager();
	       Manager(int empId, string name, double salary,int deparmentNum,double incantive);
	       void managerTask();
	       void displayManagerDetails();
};
