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
        friend void changeDimension(Box &obj);

		Box operator+(Box &obj){
			int l1 =l + obj.l;
			int b1= b+ obj.b;
			int h1 =h + obj.h;
			Box z(l1,b1,h1);
			return z;
			

		}
};

void changeDimension(Box &obj){
	obj.l = 7;
	obj.b = 7;
	obj.h = 7;
	obj.show();
}

int main(){
	Box b1(20,40,50);
	Box b2(20,40,50);
	// b.show();
	Box b3 = b1 + b2;
	b3.show();

	// changeDimension(b);
	// b.show();


    

    return 0;
}