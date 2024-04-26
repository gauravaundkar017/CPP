/*2. Write a program to accept two integers x and n and compute x raised to n.*/

#include <iostream>
using namespace std;

int power(int m, int n){
    int result = 1, i;
    for ( i = 1; i <= n; i++)
    {
        result *= m;
    }
    return result;
    

}

int main(){

    int m,n;
    int m_RaiseTo_n = power(4,2);
    cout<<m_RaiseTo_n<<endl;   
    return 0;
}