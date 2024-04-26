/*Person and Student Inheritance:
Problem Statement: Model a system for handling individuals and students within an educational institution. Create a base class Person with attributes like name and age. Derive a Student class with additional attributes like student ID and GPA, inheriting the common attributes from the Person class.*/
#include <iostream>
#include <string>

using namespace std;

// Base class Person
class Person {
protected:
    string name;
    int age;
public:
    Person(string name, int age) : name(name), age(age) {}

    // Method to display information about the person
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class Student inheriting from Person
class Student : public Person {
private:
    int studentID;
    double GPA;
public:
    // Constructor for Student class
    Student(string name, int age, int studentID, double GPA) : Person(name, age), studentID(studentID), GPA(GPA) {}

    // Method to display information about the student
    void display_student() const {
        display(); // Call the base class method to display common attributes
        cout << "Student ID: " << studentID << ", GPA: " << GPA << endl;
    }
};

int main() {
    // Creating instances of Person and Student
    Person person("John", 25);
    Student student("Alice", 20, 12345, 3.8);

    // Displaying information about person and student
    cout << "Person's Information:" << endl;
    person.display();
    cout << endl;

    cout << "Student's Information:" << endl;
    student.display_student();

    return 0;
}
