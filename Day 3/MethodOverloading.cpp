#include <iostream>

using namespace  std;
void add(int a, int b){
    cout << a + b;
    
}
int add(int a, int b, int c, int d){
    
    return a + b + c;
}
void add(int a, int b, int c){
    cout << a + b+c;
}

int main(){
    add(5,5);
    cout << endl;
    cout << add(5,5,5,5);
    cout << endl;
    add(5,5,5);
    cout << endl;
    return 0;
}