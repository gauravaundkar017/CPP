#include <iostream>
#include <fstream>
using namespace std;

class Emp{
    public: 
        int id;
        string name;

        void accept(){
            cout<<"id    name  : " ;
            cin>>id>>name;
        }
        void display(){
            cout<<this->id<<"    " <<this->name<<endl;
        }
}; 

void writefile(string fname, Emp &e1){
    ofstream book(fname,ios :: app | ios::binary);
    book.write((char*)&e1, sizeof(Emp));
    book.close();
}
void readfile(string fname){
    Emp e2;
    ifstream book(fname, ios::binary);
    while (book.read((char*)&e2, sizeof(Emp)))
    {
        e2.display();
        /* code */
    }
    book.close();
    

}


int main(){
    // e.accept();
    // e.display();
    string fname;
    Emp e;
    int id , ch;
    string name;
    do
    {
        cout<<"Choice : ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"Obj craete"<<endl;
            e.accept();
            break;
        case 2:
            cout<<"Write"<<endl;
            cout<<"file name : ";
            cin>>fname;
            writefile(fname, e);

            
            
            break;

        case 3:

            cout<<"reading file ";
            cout<<"file name : ";
            cin>>fname;

            readfile(fname);

            
            
            break;
        
        default:
            break;
        }
        
    } while (ch !=0);
    
    return 0;
}