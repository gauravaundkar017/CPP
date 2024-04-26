#include <iostream>
using namespace std;

int main(){
    char lowerCase, upperCase;
    cout<<"Enter The Charcter in lower case : ";
    cin>>lowerCase;

    upperCase = lowerCase - 32;

    cout<<"Upper Case of entered character : "<<upperCase;
}