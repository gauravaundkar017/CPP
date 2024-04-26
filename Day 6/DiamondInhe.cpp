
#include<iostream>
using namespace std;


class A
{
public:
A() { cout << "A's constructor called" << endl; }
};

class B : virtual public A
{
public:
B() { cout << "B's constructor called" << endl; }
};

class C:  virtual public A // Note the order
{
public:
C() { cout << "C's constructor called" << endl; }
};

class D :  public C , public B // Note the order
{
public:
D() { cout << "D's constructor called" << endl; }
};

int main22()
{
	D d;
	return 0;
}
