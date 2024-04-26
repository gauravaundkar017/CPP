#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(){
	cout << "\nMenu : "<<endl;
	cout << "1. Diplay Vector. "<<endl;
	cout << "2. Push from back. "<<endl;
	cout << "3. Pop from back. "<<endl;
	cout << "4. Sort. "<<endl;
	cout << "5. Reverse. "<<endl;
	cout << "6. Exit. "<<endl;	
	cout << endl;	
	cout << "Enter Choice ";
	
}

int main()
{
	vector<int> v = {1,2,5,4,3};
	int ch;
	int num;
	
	do{
		display();
		
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"Vector : ";
				for (int i : v){
					cout<<i<<" ";
				}
				cout<<endl;
				break;
			case 2:
				cout<<"To perform push operation enter element : ";
				cin>>num;
				v.push_back(10);
				break;
			case 3:
				cout<<"Performing pop operation : "<<endl;
				v.pop_back();
				break;
			case 4:
				cout<<"Sorting Vector : "<<endl;
				sort(v.begin(), v.end());
				break;
			case 5:
				cout<<"Reverse Vector : "<<endl;
				reverse(v.begin(), v.end());
				break;
			case 6:
				cout<< "Exit"<<endl;
				break;
		}		
	}while (ch != 6);
	
	
	
}
