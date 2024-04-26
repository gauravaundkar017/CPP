/*1:Write a program that accepts numbers continuously as long as the number is positive and prints the 
sum of the given numbers. */

#include <iostream>
using namespace std;

int main(){

    int sum = 0;
    int n;
    cout<<"Enter The Numbers : "<<endl;
    
    // do
    // {
    //     cin>> n;
    //     sum += n;
    // } while (n>0);
    

    while (1)
    {
        cin>> n;
        if (n<0)
        {
            break;
        }
        
        sum += n;

    }
    cout<<"Sum of The Numbers : "<<sum <<endl;
    
    return 0;
}