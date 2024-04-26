/*1. Create a class Person with data members as name, age, city. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class. */

#include <iostream>
#include "Person.h"
using namespace std;

typedef PersonAllInformation :: Person Person1;
int main(){
    Person1 p1("Gaurav", 23, "Pune");
    Person1 p2("Rahul", 22, "Pune");
    Person1 p3("Gautam", 24, "Pune");
    p1.displayInformation();
    p2.displayInformation();
    p3.displayInformation();


    Person1 :: countPerson();

    // p1.setAge(24);
    // cout<<"Age : "<<p1.getAge()<<endl;

    // p1.setCity("Mumbai");
    // cout<<"City : "<<p1.getCity()<<endl;
    // p1.setName("Viru");
    // cout<<"City : "<<p1.getName()<<endl;
    // p1.displayInformation();

    return 0;
}
