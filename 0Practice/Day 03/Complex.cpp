#include<iostream>
#include<string.h>

using namespace std;
class Complex{
	int i,r;
	public:Complex()
	{
		i=1;
		r=2;
	}
	Complex(int i,int r)
	{
		this->i=i;
		this->r=r;
	}
	void display()
	{
		cout<<"Complex :"<<i<<"  "<<r<<endl;
	}
	~Complex(){
	cout<<"----object get destroyed----"<<endl;
		
	}
	Complex operator +(const Complex obj){
		Complex res;
		res.i = this->i + obj.i;  
		res.r = this->r + obj.r;
		return res;
	}

	Complex operator -(const Complex obj2){
		
		int i1 = this->i - obj2.i;
		int r1 = this->r - obj2.r; 
		Complex r(i1,r1);
		return r;


	}

	void setI(int i)
	{
		this->i = i;

	}
	int getI(){
		return this->i;
	}
	
};


int main()
{
	
	Complex* c = new Complex(10,3);
	Complex* c1 = new Complex(7,1);
    c->display(); 
	c1->setI(8);
	c1->display();

	Complex sum = *c + *c1;
	sum.display();
	Complex sub = *c - *c1;
	sub.display();

	delete c;//imp
    return 0;
	
	
}