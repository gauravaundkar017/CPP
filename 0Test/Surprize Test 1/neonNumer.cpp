/*Q4. C Program To Check Neon Number.

[Given a number (num)  we need to check whether it is a Neon Number ( i.e. a number where the sum of digits of the square of the number is equal to the number )
and return “true” or “false” accordingly.]*/


#include <iostream>
using namespace  std;
int main(){

    int num = 9;
    int sqrNum = num * num;
    int sum = 0;
    while (sqrNum != 0)
    {
        int digit = sqrNum % 10;
        sum += digit;
        sqrNum /= 10;
    }

    if (sum == num)
    {
        cout<<"Neon";
    }
    else{
        cout<<"Not Neon";
    }
    
    cout<<sum<<endl;
    return 0;
    

}