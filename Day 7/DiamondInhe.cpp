
#include<iostream>
using namespace std;


class A
{
	int id;
protected: int salary;
	string name;

public:
	A(){
		id = 10;
		salary = 100;
		name = "Name";
	}
	A(int id, string name, int salary) { 
		this -> id = id;
		this -> name = name;
		this -> salary = salary;

		
	}
	virtual void display(){
		cout <<"id : "<<id<<" name : "<<name<<" salary : "<<salary << endl; 
	}
	virtual void calSal(){
		cout <<"salary : "<<salary << endl; 
		
	}
};

class B : virtual public A
{
protected:	int incentive;
public:
	B(int id, string name, int salary , int incentive): A(id, name, salary)
	 { this->incentive = incentive ;
	 }
	virtual void display(){
		A::display();
		cout <<"incentive : "<<incentive<<endl; 
	}
	void calSal(){
		cout <<"total salary : "<<salary + incentive<<endl; 

	}
};

class C:  virtual public A // Note the order
{
protected:	int pa, fa;
public:
	C(int id, string name, int salary , int pa, int fa): A(id, name, salary) { 
		this -> pa = pa;
		this-> fa = fa;
	 }
	virtual void display(){
		A::display();
		cout <<"pa : "<<pa<<"  fa : "<<fa<<endl; 
	}
	void calSal(){
		cout <<"total salary : "<<salary + pa +fa<<endl; 


	}
};

class D :  public C , public B // Note the order
{
	int bonus;
public:

	D(int id, string name, int salary , int pa, int fa,int incentive,int bonus) :A(id, name, salary), C(id, name,salary,pa,fa), B(id, name,salary,incentive){
		this -> bonus = bonus;
	}
	void display(){
		// B::display();
		C::display();
		cout<<"Incentives : "<<incentive<<endl;
		cout <<"bonus : "<<bonus<<endl; 
	}
	void calSal(){
		cout <<"total salary : "<<salary + incentive + fa + pa + bonus<<endl; 
		

	}
};

int main()
{
	D d(1,"vvv",4000,500,400,120,100);
	// cout<<"-----------------------------"<<endl;
	d.display();
	
	cout<<"-----------------------------"<<endl;
	d.calSal();


	return 0;
}
