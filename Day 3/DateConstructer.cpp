#include <iostream>
using namespace  std;

class DateConstructer
{
private:
    int day, month, year;
public:
    DateConstructer(){
        cout<<"----Default DateConstructer----"<<endl;
        day = 1; month = 1; year = 2001;
    }
    DateConstructer(int day, int month, int year){
        cout<<"----Parameterized DateConstructer----"<<endl;
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void assignDate(int d,int m,int y)
    {
        day = d ; month = m ; year = y ;
    }
   
    void display(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};




int main(){
    DateConstructer d1;
    
    d1.display();
    cout<<"\n";
    DateConstructer d2(1,12,2003);
    d2.display();
    cout<<"\n";
    cout<<"--------------------"<<endl;
	
    d2.assignDate(5,7,1111);
    d2.display();

    cout<<"--------------------"<<endl;

	// cout<<"enter day month year "<<endl;
    // int a,b,c;
    // cin >> a >> b >> c;
    // DateConstructer d3 (a, b, c);
    // d3.display();

    cout<<"-------Copy Constructer-------------"<<endl;
    DateConstructer d4 (d2);
    d4.display();


    cout<<"--------------------"<<endl;
    for (int i = 1; i <= 5; i++)
    {
        DateConstructer d5(1,5,2001);
        d5.display();

    }
    



    
    return 0;

}