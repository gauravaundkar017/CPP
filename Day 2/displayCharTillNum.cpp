/*3. Write a program to accept a character, an integer n and display the next n characters.*/

#include <iostream>
using namespace std;

int main(){

    int result = 0;
    char ch;
    cout<<"Enter The Character : "<<endl;
    cin>> ch;

    int n;
    cout<<"Enter The Number : "<<endl;
    cin>> n;
    
    for (int i = 1; i <= n + 1; i++)
    {
        if(ch=='z' || ch=='Z')
        {
            printf("large limit\n");
            i=n;
        }
        result = char(ch++);
        cout<<char(result)<<" ";
    }
    
    
    return 0;
}