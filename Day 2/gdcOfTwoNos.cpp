/*6. Accept two numbers and calculate GCD of them.   */

#include <iostream>
using namespace std;

int main(){

    int a = 10, b = 50;
    int result = min(a,b);

    while (result > 0)
    {
        if (a % result == 0 && b % result == 0)
        {
            break;
        }
        result--;
    }
    
    cout << "GCD of " << a << " and " << b << " is "<< result;
    
    

    return 0;
}