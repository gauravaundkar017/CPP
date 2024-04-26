
#include <iostream>
using namespace std;

namespace PersonAllInformation{
    class Person
    {
    private:
        string name;
        int age;
        string city;
        static int counter ;
    public:
        Person(){
            name = "Unknown";
            age = 18;
            city = "Undefined";
            counter ++;
        }

        Person(string name , int age, string city) : name(name), age(age), city(city){
            counter ++;
        };

        void displayInformation(){
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"City : "<<city<<endl;
            // cout<<"Counter : "<<counter<<endl;
        }

        static void countPerson(){
            cout<<"Counter : "<<counter<<endl;
        }

        

        void setAge(int a){
            age = a;
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
        void setName(string name){
            this -> name = name;
        }

        string getName(){
            return name;
        }



        
    };

    int Person :: counter = 0;
    
    
    
};