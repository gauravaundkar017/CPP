/*1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.*/

#include <iostream>
#include "Student.h"
using namespace std;

typedef StudentClsss :: Student Student1;

int main(){

    Student1 s1;
    s1.acceptInfo();
    s1.displayMarkMemo();
    
    

    return 0;
}
