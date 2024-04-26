/*Q3. Write a program to check string is a palindrome.*/
#include <iostream>
using namespace  std;
int main(){

    string str = "abcba";
    int n = str.length();
    cout<<n<<endl;
    bool isPallindrome = false;

    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] == str[n-i-1])
        {
            isPallindrome = true;
        }
        else{
            isPallindrome = false;
        }
    
    }

    if (isPallindrome)
    {
       cout<<"string is Pallindrome";
    }else{
       cout<<"string is Not Pallindrome";

    }
    
}