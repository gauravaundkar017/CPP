#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

class Student
{
private:
    int rollNo;
    char name[20], city[20];
public:
    // Student(){

    // }
    // Student(int rollNo, char *name, char *city){
        // this -> rollNo = rollNo;
        // strcpy(this->name, name);
        // strcpy(this->city, city);
    // }

    void accept(int rollNo, char* name, char* city){
            this -> rollNo = rollNo;
            strcpy(this->name, name);
            strcpy(this->city, city);
            cout<<"Student created------"<<endl;

    }
    void diplay(){
        cout<<rollNo<< "   "<<name <<"    "<<city<<"   "<<endl;
    }
};

void display(){
    cout<<"\n1. Create new student. "<<endl;
    cout<<"2. Display Student. "<<endl;
    cout<<"3. Write student data into file. "<<endl;
    cout<<"4. Read student data from file."<<endl;
    cout<<"5. Append to the file."<<endl;
    cout<<"6. Make copy of file. "<<endl;
    cout<<"6. Exit\n "<<endl;
    cout<<"Enter your choice : ";

}

void writeStudents(string fileName ,Student& obj){
    
    
    ofstream studnetFile(fileName,ios::binary);
    studnetFile.write((char*)&obj,sizeof(Student));
	studnetFile.close();
    cout<<"Data written in file "<<endl;
}


void readStudents(string fileName){
    Student s2;
    ifstream readStudentsFile(fileName, ios :: binary);
    if (readStudentsFile.is_open()){
        readStudentsFile.read((char*)&s2, sizeof(Student));
        s2.diplay();
        readStudentsFile.close();
        cout<<"\n----File Readed successfully-----\n";
    }else{
        cout<<"Unable to open file"<<endl;
    }
}
    




int main(){
    int ch;
    int rollNo;
    string fileName ;
    char name[20], city[20];
    Student s1,s2 ;

    do
    {
        display();
        cin>>ch;
        switch (ch)
        {
        case 1 :
            cout<<"RollNumber  "<<"Name  "<<"City"<<endl;
            cin>>rollNo>>name>>city;
            s1.accept(rollNo,name,city);        
            break;

        case 2 :
            s1.diplay();
            break;

        case 3 :
            cout<<"Enter file name : ";
            cin>>fileName;
            writeStudents(fileName,s1);
            break;

        case 4 :
            cout<<"Enter file name : ";
            cin>>fileName;
            readStudents(fileName);

            break;

        case 5 :
        
            break;
        default:

            break;
        }

    } while (ch != 6);
    


    return 0;
}
