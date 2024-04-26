#include <iostream>
#include<string.h>
using namespace  std;


class Student
{
private:
    int rollNumber;
    char *name;
    double m1, m2, m3;
    double total;
    double percentage;
    char grade ;
    void toatlMarks(){
        total = m1 + m2 + m3;
    }

    

    void calculateGrade(){
        float m = percentage;
        if (m>=90)
        {
            grade = 'A';
        }
        else if (m>=80)
        {
            grade = 'B';
        }
        
        else if (m>=70)
        {
            grade = 'C';
        }
        
        else if (m>=60)
        {
            grade = 'D';
        }
        else{
            grade = 'F';
        }
        
        
    }
    void totalPercentage(){
        percentage = total/3.0f;
    }

    
    


public:
    
    Student(){
        this-> rollNumber = 0;
        this-> name = new char;
        *name = '\0';
        m1 = m2 = m3 = 0; 
        total = 0;
        
    }
    Student(int rollNumber,char* name,int m1,int m2,int m3){
        this->rollNumber = rollNumber;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->m1 = m1;
        this->m2 = m2;
        this->m3 = m3;
    }
    void display(){
        toatlMarks();
        totalPercentage();
        calculateGrade();

        cout << "Roll Number = " << rollNumber<<endl;
        cout<<"Name : ";
        for (int i = 0; i < strlen(this->name); i++)
        {
            cout<<*(name+i);
        }
        cout<<endl;

        cout<<"m1 = "<<m1<<"\nm2 = "<<m2<<"\nm3 = "<<m3<<"\ntotal = "<<total<<"\nPercentage = "<<percentage<<" %"<<"\nGrade = "<<grade<<endl; 
    } 
    void assignValues(int rollNumber,char* name,int m1,int m2,int m3)
        {
            this->rollNumber=rollNumber;
            this->name=new char[strlen(name)+1];
            strcpy(this->name,name );
            this->m1=m1;
            this->m2=m2;
            this->m3=m3;
    }

    double getTotalMarks(){
        toatlMarks();
        return total;

    }
    void setM1(int m1){
        this-> m1 = m1;
    }
    int getM1(){
        return this -> m1;
    } 

    void setName(char* name){
        strcpy(this->name,name);
    }
    
    bool getRollNumber (int rollNumber){
        if (this -> rollNumber == rollNumber)
        {
            cout<<"Roll Number is Present"<<endl;  
            display();
            cout<<"-----------------"<<endl; 
            return true; 
        }
        return false;
    }
    double getPercentage() {
        totalPercentage();
        return percentage;
    }
        


    

    ~Student(){
        delete[] name;
    }

    

    
};





int main(){

    Student iacsd[5];
    Student std1(101,"Ram",90,80,70);
    Student std2(102,"Seeta",20,30,70);
    Student std3(103,"Mitesh",30,20,50);
    Student std4(104,"Ritu",50,80,70);
    Student std5(105,"Neeta",60,70,10);

    iacsd[0] = std1;
    iacsd[1] = std2;
    iacsd[2] = std3;
    iacsd[3] = std4;
    iacsd[4] = std5;

    for (int i = 0; i < 5; i++)
    {
        // iacsd[i].totalPercentage();
        if (iacsd[i].getTotalMarks() >= 200) {
            iacsd[i].display();
            cout << endl;
        }
        
        cout<<"\n";
    }

    bool found = false;
    int rollNumberToCheck = 102;
    for (int i = 0; i < 5; i++)
    {        
        if (iacsd[i].getRollNumber(rollNumberToCheck))
        {
            iacsd[i].setName("Thor");
            iacsd[i].display();
            found = true;
            cout << "Details updated successfully!" << endl;
            break;
            
        }
    }

    if (!found) {
        cout << "Student with roll number " << rollNumberToCheck << " not found!" << endl;
    }
    cout << "Updated student details:" << endl;
    for (int i = 0; i < 5; i++) {
        iacsd[i].display();
        cout << endl;
    }
    
    return 0;

}