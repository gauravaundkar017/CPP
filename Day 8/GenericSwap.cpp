#include<iostream>
using namespace std;
template <class T>

void swapValue(T &v1, T &v2){
	T temp = v1;
	v1 = v2;
	v2 = temp;
	cout<<"a = "<<v1<<"   b = "<<v2<<endl;
	
}
int main()
{
	int a = 10, b =20;
	swapValue(a,b);	
	return 0;
}
