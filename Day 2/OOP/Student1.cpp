#include <bits/stdc++.h>
using namespace std;
class Student1
{
private:
    int rollNo;
    string name;
    char div;
  
public:
    void inputData(int rollNo,string name,char div){
        rollNo = rollNo;
        name = name;
        div = div;
        cout<<"Name of student : "<< name << endl; 
        cout<<"rollNo of student : "<< rollNo << endl; 
        cout<<"div of student : "<< div << endl;
    }

    

};



int main()
{
	Student1 s1,s2;
    s1.inputData(1,"Deadpool Lal",'D');
    s2.inputData(2,"Deadpool Pila",'D');
    // s1.display();

	return 0;
}