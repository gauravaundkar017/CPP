#include<iostream>
using namespace std;

class Box{
	
	private:int l,b,h;
	public:Box(){
		l=b=h=10;
	       }
	       Box(int l,int b,int h)
	       {
	       	this->l=l;
	       	this->b=b;
	       	this->h=h;
	       	
		   }
		   void show(){
		   	cout<<"  Length="<<l<<endl;
		   	cout<<"  Breadth="<<b<<endl;
		   	cout<<"  Height="<<h<<endl;
		   	
		   }  
		   
		   Box operator + (const Box &obj){
		   	cout<<"Addition : "<<endl;
		   	int l1 = this -> l + obj.l;
		   	int b1 = this -> b + obj.b;
		   	int h1 = this -> h + obj.h;
		   	Box newObj(l1,b1,h1);
		   	return newObj;
		   }
		   
		   
		   Box operator - (const Box &obj){
		   	cout<<"Substraction : "<<endl;
		   	int l1 = this -> l - obj.l;
		   	int b1 = this -> b - obj.b;
		   	int h1 = this -> h - obj.h;
		   	Box newObj(l1,b1,h1);
		   	return newObj;
		   }
		  friend void changeDimensions(Box &obj);
		  void swapBox(Box &b1){
			Box temp = b1;
			b1 = *this;
			*this = temp;

		  }
};
void changeDimensions(Box &obj){
	obj.l=100;
	obj.b=100;
	obj.h=230;
//	obj.show();
}



int main(){
	
	Box b1(5,5,5); 	
	b1.show();
	//	changeDimensions(b);
	
	Box b2(10,10,10); 	
	b2.show();


	b1.swapBox(b2);
	b1.show();
	b2.show();
	
	// Box b3;
	// b3 = b1 + b2;
	// b3.show();
	
	// cout<<"-----"<<endl;
	// Box b4;
	// b4 = b1 - b2;
	// b4.show();
	
}
