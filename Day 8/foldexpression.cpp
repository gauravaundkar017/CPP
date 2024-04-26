#include<iostream>
using namespace std;

template <class T>
class Number{	
	T n1, n2;
	public :
		Number(T n1,T n2) : n1(n1), n2(n2){
		}
		
		T display(){
			cout<<"Number1 =  "<<n1<<"   Number2 = " <<n2<<endl;
		}		
		
		T setNum(T num){
			n1 = num;
		}
		
		T getNum(){
			cout<<"n1 = "<<n1<<endl;
//			return n1;
		}
		
		
};

int main(){
	Number<int> n(1,2);
	n.display();
	cout<<"=================="<<endl;
	n.setNum(7);
	n.getNum();
	n.display();
}



//template<typename...T>
//auto sum(T...args){
//	return(...+args);
//}
//	auto result = sum(1,2,3,4,5)
