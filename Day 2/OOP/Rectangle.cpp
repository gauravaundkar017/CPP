#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
private:
	int breath, length;
public:
	void acceptPrivateData(int l, int b){
		length = l;
		breath = b;
		cout<<"L = "<<length<<" B = "<<breath<<endl;
		
	}
	int area(){
		return length * breath;
	}
	
};




int main()
{
	Rectangle r1;
	r1.acceptPrivateData(5,4);
	cout<<r1.area();

	return 0;
}