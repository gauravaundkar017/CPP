/*4. Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write 
getters and setters for all the data members. Also add the display function. Create the object of this 
class in main method and invoke all the methods in that class. 
*/

#include <iostream>
using namespace  std;

class Point
{
private:
    int x , y;
public:
    Point(){
        cout<<"----Df Constru------"<<endl;
        x = 1;
        y = 2;
    }
    Point(int x , int y){
        cout<<"-----Para Constr-----"<<endl;
        this->x = x;
        this->y = y;
    }
    void acceptCoordinate(int x, int y){
        this->x = x;
        this->y = y;
    }
    void displayCoordinate(){
        cout<<"x = "<<x<<"   y = "<<y<<endl;
    }

};





int main(){
    Point p1;
    p1.acceptCoordinate(5,10);
    p1.displayCoordinate();
    cout<<"-------------"<<endl;
    Point p2;
    p2.displayCoordinate();
    cout<<"-------------"<<endl;
    Point p3(45,60);
    p3.displayCoordinate();
    return 0;
}