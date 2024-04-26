#include <iostream>
using namespace std ;
void swapNum(int &a, int &b){
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    cout<<"In swapfunction" <<a  <<b<<endl;
}

void swapByPtr(int* a, int * b ){
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
    cout<<"In swapfunction" <<*a<<" "  <<*b<<endl;

}

int main(){

    int a = 1,  b = 2;
    cout<<"In main Fn : " <<a <<b<<endl;

    // swapNum(a,b); 
    swapByPtr(&a, &b);
    cout<<"After swapByPtr" <<a <<b;
}