/*1. Create a class Person with data members as name, age, city. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class. 
*/
#include<iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string city;
    static int counter;

public:
    Person(){
        this->name = " ";
        this->age = 0;
        this->city = " ";
        counter ++;
    }
    Person(string name, int age, string city){
        this-> name = name;
        this -> age = age;
        this -> city =city;
        counter ++;
    }
    void display(){
        cout<<"Counter : "<<counter<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"City : "<<city<<endl;
    }
    void acceptInf(string name, int age, string city){
        this-> name = name;
        this -> age = age;
        this -> city =city;
        // counter ++;
    }
    static void showCounter(){
        
	    cout<<"Total Numer Object Created :"<<counter<<endl;
    }
    

    void setName(string name){
        this -> name = name;

    }
    string getName(){
        return name;
    }

    void setAge(int age){
        this -> age = age;
    }

    int getAge(){
        return age;
    }

    void setCity(string city){
        this -> city = city;
    }
    string getCity(){
        return city;
    }
};
int Person :: counter = 0;




int main(){
    Person p1;
    p1.display();
    // p1.showCounter();

    cout<<"-----------"<<endl;

    Person p2("Abc", 18, "Xyz");
    p2.display();
    // p2.showCounter();
    cout<<"-----------"<<endl;

    Person p3;
    p3.acceptInf("DEF", 20, "FGH");
    p3.display();
    p3.showCounter();
    cout<<"-----------"<<endl;
    p3.setName("Lala");
    p3.setAge(50);
    p3.setCity("Bombay");
    cout << "Name of Person " << p3.getName() << endl;
    cout << "Age of Person " << p3.getAge() << endl;
    cout << "City of Person " << p3.getCity() << endl;
    // p3.display();
    p3.showCounter();
    return 0;
}
