#include <iostream>
using namespace  std;

int main(){
    int num1 , num2 ;
    cout<<"Enter Two Numbers : ";
    cin>>num1>>num2;
    int sumofTwoNumber = num1 + num2;
    int differenceOfTwoNumber = num1 - num2;
    differenceOfTwoNumber = abs(differenceOfTwoNumber);

    int max = (sumofTwoNumber + differenceOfTwoNumber) / 2 ; 
    int min = (sumofTwoNumber - differenceOfTwoNumber) / 2 ; 


    cout<<"The maximum number is  = "<< max<<endl;
    cout<<"The manimum number is  = "<< min<<endl;


    return 0;

}