#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

using namespace std;
 
class Book{
	
	int bookid;
	char name[20],author[20];
	public :void accept(int id,char* nm,char* ath){
		bookid=id;
		strcpy(this->name,nm);
		strcpy(author,ath);
		cout<<"----book created----"<<endl;
			}
		void display()
		{
			cout<<bookid<<"    "<<name<<"    "<<author<<endl;
		}
};

void writeBook(string fileName, Book &b1){
    ofstream obj;
    obj.open(fileName, ios :: binary | ios :: app);
    obj.write((char*)&b1, sizeof(Book));
    obj.close();
}

void readBook(string name){
    Book b2;
    ifstream input(name, ios :: binary);
    while (input.read((char*)&b2, sizeof(Book)))
    {
        b2.display();
    }
    
}

int main()
{
	int ch;
	int id;
	string filename;
	char nm[20],auth[20];
	Book b1;
	cout<<"1 :add book  2:display book 3: write book in file 4:read from file 0:exit"<<endl;
	do{
		
		cout<<"enter choice ";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"id name author "<<endl;
			       cin>>id>>nm>>auth;
			       b1.accept(id,nm,auth);
			      break;
			case 2:
			  b1.display();
			     break;
			case 3:
				//to store book obj into file accept filename  
			    cout<<"enter file name ";
			    cin>>filename;
			    writeBook(filename,b1);
			    break;
			case 4:cout<<"enter file name ";
			    cin>>filename;
			 readBook(filename);
			    break;
			case 5:break;
		}
	}while(ch!=0);
    return 0;
}

