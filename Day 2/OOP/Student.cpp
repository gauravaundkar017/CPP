/*7:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.*/

#include <iostream>
using namespace std;
class Student
{
private:
    int rollno;
    float marks1, marks2, marks3;
    
public:
    void acceptInfo() {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter marks for subject 1: ";
        cin >> marks1;
        cout << "Enter marks for subject 2: ";
        cin >> marks2;
        cout << "Enter marks for subject 3: ";
        cin >> marks3;
    }
    void display() {
        cout << "Roll number: " << rollno << endl;
        cout << "Marks for subject 1: " << marks1 << endl;
        cout << "Marks for subject 2: " << marks2 << endl;
        cout << "Marks for subject 3: " << marks3 << endl;
    }

    float totalMarks() {
        return marks1 + marks2 + marks3;
    }
    float calculatePercentage() {
        return (totalMarks() / 3.0f);
    }
    char calculateGrade() {
        float percentage = calculatePercentage();
        if (percentage >= 90)
            return 'A';
        else if (percentage >= 80)
            return 'B';
        else if (percentage >= 70)
            return 'C';
        else if (percentage >= 60)
            return 'D';
        else
            return 'F';
    }
};



int main(){
    Student student;

    student.acceptInfo();

    cout << "\nStudent Information:\n";
    student.display();

    cout << "\nTotal Marks: " << student.totalMarks() << endl;
    cout << "Percentage: " << student.calculatePercentage() << "%" << endl;
    cout << "Grade: " << student.calculateGrade() << endl;
    
    return 0;
}