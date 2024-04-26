/*8. Write a program to print all prime numbers between 1 to n*/

#include <iostream>
using namespace std;

bool isPrime(int num){
    if (num == 0 || num == 1)
    {
        return false;
    }
    for (int i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
            return false;
        }
        
    }
    return true;
    
    
}

int main(){
    int n1 = 250;
    int n2 = 270, i;


    for ( i = n1; i <=n2 ; i++)

    {
        if (isPrime(i))
        {
            cout<<i<<" ";

        }
        
    }
    
    
}