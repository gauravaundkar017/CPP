/*
#include <iostream>
#include <typeinfo>

using namespace std;


class A{
	public : 
		void foo() {
    		cout << "A::foo()" << endl;
  		}
	
};

class B{
	public : 
		void foo() {
    		cout << "B::goo()" << endl;
  		}
	
};

class C : public A, public B{
	
	public :
		void fooGoo(){
			A :: foo();
			B :: foo();
		}
	
	
};



int main(){
	C c1;
	c1.fooGoo();
}

*/


#include<iostream>
using namespace std;

class A
{
public:
A() { cout << "A's constructor called" << endl; }
};

class B
{
public:
B() { cout << "B's constructor called" << endl; }
};

class C: public B, public A // Note the order
{
public:
C() { cout << "C's constructor called" << endl; }
};

int main1()
{
	C c;
	return 0;
}

