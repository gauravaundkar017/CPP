/*1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.*/
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int rollno;
    float marks1, marks2, marks3;

public:
    void acceptInfo() {
        cout << "Enter Roll Number: ";
        cin >> rollno;
        cout << "Enter Marks for Subject 1: ";
        cin >> marks1;
        cout << "Enter Marks for Subject 2: ";
        cin >> marks2;
        cout << "Enter Marks for Subject 3: ";
        cin >> marks3;
    }

    float calculateTotal() const {
        return marks1 + marks2 + marks3;
    }

    float calculatePercentage() const {
        return (calculateTotal() / 3.0f);
    }

    char calculateGrade() const {
        float percentage = calculatePercentage();
        if (percentage >= 90)
            return 'A';
        else if (percentage >= 80)
            return 'B';
        else if (percentage >= 70)
            return 'C';
        else if (percentage >= 60)
            return 'D';
        else if (percentage >= 40)
            return 'E';
        else
            return 'F';
    }

    void display() const {
        cout << "Roll Number: " << rollno << endl;
        cout << "Marks for Subject 1: " << marks1 << endl;
        cout << "Marks for Subject 2: " << marks2 << endl;
        cout << "Marks for Subject 3: " << marks3 << endl;
        cout << "Total Marks: " << calculateTotal() << endl;
        cout << "Percentage: " << calculatePercentage() << "%" << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    Student student;
    student.acceptInfo();
    cout << "\nStudent Information:\n";
    student.display();
    return 0;
}
