#include <iostream>
using namespace std;
void swap(int *a, int *b){
    cout<<"Add   x=a = "<<&a<<endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    // cout<<"Swap F  x =a "<<a << "    y = " <<b<<endl;


}


int main(){
    int x = 10;
    int y = 20;
    cout<<"pahilay value  x = "<<x << "    y = "<<y <<endl;
    cout<<"Add   x = "<<&x<<endl;

    swap(&x,&y);
    cout<<"After swap value   x = "<<x << "   y = "<<y <<endl;


    return 0;
}