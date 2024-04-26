#include <iostream>
using namespace std;
bool prime(int n){
    // bool flag = false;
        int i;
        for ( i = 2; i < n/2; i++)
            {
                if (n % i == 0)
                {
                    return false;
                }
                // else
                // return true;    


                
            }
            
        return true; 
    }

int main(){

    int a = 900, b = 120;
    int chota = min(a,b);
    for (int  i = chota; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout<<i;
            break;
        }
        
    }
    

    // int n = 153;
    // int r = 0;
    // int o = n;

    // while (n != 0)
    // {
    //     /* code */
    //     int d = n % 10;
    //     r +=  d*d*d ;
    // //    int s = r * 10; 
    //     n /= 10;

    // }
    //     cout<<r<< " "<<endl;
    // if (r==o)
    // {
    //    cout<<"Arm";
    // }
    



    // int j;
    
    // int a = 91 , b = 100;
    // for ( j = a; j <= b; j++)
    // {
        
    //     /* code */
    //     if (prime(j))

    //     {
    //         cout<<j<<" ";
    //     }
        


    // }
    


    // if (!flag)
    // {
    //     cout<<"Prime"<<endl;
    // }
    // else 
    //     cout<<"Not Prime"<<endl;

    
    



    // int m = 10;
    // int n = 12,sum = 0;
    // for (int i = m; i <= n; i++)
    // {
    //     sum += i;
    // }
    // cout<<sum;
    




// char c = 'A';
// char ch = tolower(c);

// cout<<ch<<endl;
    
    // int n = 5;
    // int m = 3;
    // int power = 1;
    // for (int  i = 1; i <= m; i++)
    // {
    //     power *= n;
    // }
    //     cout<<power<<" ";
    
}
