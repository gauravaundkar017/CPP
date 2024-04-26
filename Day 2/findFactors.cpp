/*5. Write a program to calculate factors of a given number.*/
#include <iostream>
using namespace std;

int main(){

    int n = 11;
    cout<<"Factors : ";
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout<<i<<" ";
        }
        
    }
    

    return 0;
}