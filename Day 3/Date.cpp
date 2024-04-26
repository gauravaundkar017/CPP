/*2. Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class. 
*/
#include <iostream>
using namespace  std;

class Date{
private:
    int day, month, year;

public:
    void assingDate(int day, int month, int year){
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void display(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
    bool isLeapYear(){
        cout<<"---checking leapYear----"<<endl;
        if (year % 4 == 0)
        {
            return true;
        }else{
            return false;
        }
        
    }
    
};

int main(){
    Date d1;

    d1.display();
    d1.assingDate(5,5,2011);
    d1.display();
    cout<<"-------------"<<endl;
    Date d2;
    d2.assingDate(2,2,2000);
    int leap = d2.isLeapYear();
    if (leap)
    {
        cout<<"Leap Yaer"<<endl;
    }else{
        cout<<"Not Leap Yaer"<<endl;
        
    }
    d2.display();
    


    return 0;

}