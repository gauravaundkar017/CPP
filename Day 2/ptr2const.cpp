#include <bits/stdc++.h>
using namespace std;

int main(){

    int n = 100;
    //Pointer to const
    const int x = 90;
    const int * ptrX = &x;
    cout<< "Value in ptrX = " << *ptrX << "     address = " << ptrX << endl;
    ptrX = &n;
    cout<< "Value in ptrX = " << *ptrX << "     address = " << ptrX << endl;

    
    // int m = 101;
    // //Pointer to const
    // const int x = 90;
    // int  * const  ptrX = &x;
    // cout<< "Value in ptrX = " << *ptrX << "     address = " << ptrX << endl;
    // ptrX = &n;
    // cout<< "Value in ptrX = " << *ptrX << "     address = " << ptrX << endl;



    return 0;
}