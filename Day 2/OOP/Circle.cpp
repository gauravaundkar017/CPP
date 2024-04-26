#include <iostream>
using namespace  std;

class Circle
{
private:
    int r ;
    float pi = 3.14;

public:
    void disply(int radius, float pi = 3.14){
        r = radius;
        pi = pi;
    }
    void area(){
        cout<< float(pi * r * r) << endl;
      
    }
    
};

int main(){
    Circle c1;
    c1.disply(5);
    c1.area();


    return 0;
}

