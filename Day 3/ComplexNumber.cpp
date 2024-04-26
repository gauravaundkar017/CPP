/*5. Create a class ComplexNumber with data members real, imaginary. Create Default and Parameterized constructors. Write getters and setters for all the data members. Also add the display function. Create the object of this class in main method and invoke all the methods in that class.
*/

#include <iostream>
using namespace std;
class ComplexNumber
{
private:
    int i, r;
public:
    ComplexNumber(){
        this -> i = 1;
        this -> r = 1;
    }
    ComplexNumber(int r, int i){
        this -> r = r;
        this -> i = i;
    }
    void diplay(){
        cout<<r<<" "<<i<<"i"<<endl;
    }

    void setRealNumber(int r){
        this -> r = r;
    }
    void setImaginaryNumber(int i){
        this -> i = i;
    }

    int getRealNumber(){
        return r;
    }
    int getImaginaryNumber(){
        return i;
    }
};




int main(){
    ComplexNumber c;
    c.diplay();
    cout<<c.getRealNumber()<<endl;
    return 0;
}