#include <iostream>
#include <fstream>
#include <cstring> // For string operations
using namespace std;

class Student {
private:
    int rollNum;
    string name;
    string mobileNum;
public:
    Student() : rollNum(0), name(""), mobileNum("") {}
    Student(int rollNum, const string& name, const string& mobileNum) : rollNum(rollNum), name(name), mobileNum(mobileNum) {}

    void display() const {
        cout << rollNum << "\t" << name << "\t" << mobileNum << endl;
    }

    int getRollNum() const {
        return rollNum;
    }

    void info() {
        cout << "Enter Roll Number: ";
        cin >> rollNum;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Mobile Number: ";
        cin >> mobileNum;
    }
};

void writeStudent(const string& fname, const Student& s1) {
    ofstream file(fname, ios::binary | ios::app);
    if (!file.is_open()) {
        cout << "Error opening file." << endl;
        return;
    }
    file.write(reinterpret_cast<const char*>(&s1), sizeof(Student));
    file.close();
}

void readStudent(const string& fname) {
    cout << "RollNum\tName\tMobileNum" << endl;
    Student s1;
    ifstream file(fname, ios::binary);
    if (!file.is_open()) {
        cout << "Error opening file." << endl;
        return;
    }
    while (file.read(reinterpret_cast<char*>(&s1), sizeof(Student))) {
        s1.display();
    }
    file.close();
}

void readStudentFind(const string& fname, int rno) {
    Student s1;
    ifstream file(fname, ios::binary);
    bool found = false;
    if (!file.is_open()) {
        cout << "Error opening file." << endl;
        return;
    }
    while (file.read(reinterpret_cast<char*>(&s1), sizeof(Student))) {
        if (s1.getRollNum() == rno) {
            s1.display();
            found = true;
            break;
        }
    }
    file.close();
    if (!found) {
        cout << "No student found." << endl;
    }
}

void updateStudent(const string& fname, int rno) {
    Student s1, s2;
    fstream file(fname, ios::binary | ios::in | ios::out);
    bool found = false;
    if (!file.is_open()) {
        cout << "Error opening file." << endl;
        return;
    }
    while (file.read(reinterpret_cast<char*>(&s1), sizeof(Student))) {
        if (s1.getRollNum() == rno) {
            long num = -1 * static_cast<long>(sizeof(Student));
            file.seekp(num, ios::cur);
            s2.info(); // Assuming info() function gets new student details
            file.write(reinterpret_cast<const char*>(&s2), sizeof(Student));
            found = true;
            break;
        }
    }
    file.close();
    if (!found) {
        cout << "No student found." << endl;
    }
}

int main() {
    int choice, rollNum;
    string filename = "students.dat"; // Change file name if needed

    do {
        cout << "\n1. Write Student\n2. Read Students\n3. Find Student by Roll Number\n4. Update Student\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Student s;
                s.info();
                writeStudent(filename, s);
                break;
            }
            case 2:
                readStudent(filename);
                break;
            case 3:
                cout << "Enter Roll Number to find: ";
                cin >> rollNum;
                readStudentFind(filename, rollNum);
                break;
            case 4:
                cout << "Enter Roll Number to update: ";
                cin >> rollNum;
                updateStudent(filename, rollNum);
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 5);

    return 0;
}
