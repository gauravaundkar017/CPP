#include<iostream>
using namespace std;

class Date{
		int d, m, y;
	public :
		Date (int d, int m, int y) : d(d), m(m), y(y){}

		void display(){
			cout<<"Date : "<<d<<"/"<<m<<"/"<<y<<endl;
		}
		
			
};
template <class T>
	 void swapObj(T &obj1 , T &obj2){
		T temp = obj1;
		obj1 = obj2;
		obj2 = temp;

}

int main()
{

	Date d1(1,2,3);//	d1.display();
	
	Date d2(4,5,6);

	swapObj(d1, d2);
	d1.display();
	d2.display();	
	
	return 0;
}
