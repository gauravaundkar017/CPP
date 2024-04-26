#include<iostream>
using namespace std;

class Date{
	private:int day,month,year;
	public:Date()
	{
		cout<<"---default Date----"<<endl;
		day=1;month=1;year=1990;
	}
	Date(int d,int m,int y )
	{
		cout<<"---parameter Date----"<<endl;
		day=d;month=m;year=y;
	}
	void showDate()
	{
		cout<<"Date:"<<day<<"/"<<month<<"/"<<year<<endl;
	}
	
	
};


class Product{
    int prdid;
    string name;
    //has a reln
    Date expDate;

    public : 
    Product(){
        prdid=1;
	    name="no name";
        expDate = Date();
    }

    Product (int prdid, string name, int i, int j, int k ){
        this->prdid = prdid;
        this->name = name;
        this->expDate = Date(i,j,k);

    }
    void display(){
        cout<<"------Product Details--------"<<endl;
		cout<<"PrdId  "<<prdid<<endl;
		cout<<"Name  "<<name<<endl;
        expDate.showDate();
    }


};


int main(){

    Product p(1,"pppp", 10,12,15);
    p.display();

    return 0;
}