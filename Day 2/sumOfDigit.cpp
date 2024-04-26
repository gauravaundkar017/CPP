/*
2: Write a program to Accept a number and display its sum of digits.:ex 568    5+6+8*/

#include <iostream>
using namespace std;

int main() {
    int num = 123;
    int sum = 0;
    while (num !=0)
    {
        int digit = num % 10;
        sum += digit;
        num /= 10;
        
    }
    cout<<sum;
    return 0;
}