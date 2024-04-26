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