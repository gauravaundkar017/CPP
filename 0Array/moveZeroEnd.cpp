#include <iostream>
using namespace std;

int main(){
    int a[5] =  {0, 1, 2, 0 , 3};
    int j = -1;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            // cout<<j<<" ";
            break;
        }
        
    }
    cout<<j<<" ";

    if (j == -1)
    {
        return *a;
    }
    for (int  i = j + 1 ; i < 5; i++)
    {
        cout<<"\n"<<j<<" "<<endl;
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
        /* code */
    }
    
    
    

     
    return 0;
}