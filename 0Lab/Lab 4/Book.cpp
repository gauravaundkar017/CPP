/*3. Create a class Book with data members as bname,id,author,price. Write getters and setters for all the 
data members. Also add the display function. Create Default and Parameterized constructors. Create 
the object of this class in main method and invoke all the methods in that class. 
*/

#include <iostream>
using namespace std;

class Book{
private :
    string bookName ;
    int bookId;
    string author;
    int price;
    int static counter ;

public :
    Book(){
        this -> bookName = " ";
        this -> bookId = 0 ;
        this -> author = " " ;
        this -> price = 100;
        counter ++;
    }
    Book(string bookName,int bookId,string author, int price ){
        this -> bookName = bookName;
        this -> bookId = bookId;
        this -> author = author;
        this -> price = price;
        counter ++;
    }
    void diplay(){
        cout<<bookId<<endl;
        cout<<bookName<<endl;
        cout<<author<<endl;
        cout<<price<<endl;

    }
    static void showCounter(){
        cout<<"Number of object created : "<<counter <<endl;

    }
    
    void setBookName(string bookName){
        this -> bookName = bookName;
    }

    string getBook(){
        return bookName;
    }

    void setPrice(int price){
        this -> price = price;
    }

    int getPrice (){
        this -> price;
    }


};

int Book :: counter = 0 ;

int main(){
    Book b;
    b.diplay();
    cout<<"---------"<<endl;
    Book d("avc",101,"mw",7);
    d.diplay();
    d.setPrice(700);
    d.setBookName("DJ");
    d.diplay();
    
    

    d.showCounter();
    return 0;
}


