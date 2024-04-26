#include<iostream>
//#include <type_traits>
using namespace std;



template<typename T > 
void info(const T &value){
	if constexpr(is_integral <T>){
		cout<<"Integral value  "<<value<<endl;
	}
	else{
		cout<<"Non integral value";
	}
}
int main(){
	info(10);
	info(10.2);
}
