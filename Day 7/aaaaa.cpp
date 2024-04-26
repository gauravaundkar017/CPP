#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class Emp {
public: 
    int id;
    char name[20];

    void accept(int id,char* nm) {
        this->id = id;
        strcpy(this->name, nm);
    }

    void display() {
        cout << this->id << "    " << this->name << endl;
    }
}; 

void writefile(string fname, Emp &e1) {
    ofstream book(fname, ios::app | ios::binary);
    book.write((char*)&e1, sizeof(Emp));
    book.close();
}

void readfile(string fname) {
    Emp e2;
    ifstream book(fname, ios::binary);
    while (book.read((char*)&e2, sizeof(Emp))) {
        e2.display();
    }
    book.close();
}

void readfileFind(string fname, int id){
    Emp e2;
    bool found = false;
    ifstream book(fname, ios::binary);
    while (book.read((char*)&e2, sizeof(Emp))) {
        if (e2.id == id)
        {
            e2.display();
            found = true;
            /* code */
        }
        
    }
    if (!found) {
        cout << "Book not found!" << endl;
    }
    book.close();


}

int main() {
    string fname;
    Emp e;
    int ch;
    int id;
    char name[20];

    do {
        cout << "Choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "Object created" << endl;
                cout << "id    name" << endl;
                cin>>id>>name;
                e.accept(id,name);
                break;
            case 2:
                cout << "Write" << endl;
                cout << "File name: ";
                cin >> fname;
                writefile(fname, e);
                break;
            case 3:
                cout << "Reading file" << endl;
                cout << "File name: ";
                cin >> fname;
                readfile(fname);
                break;

            case 4:
                cout << "find id "  ;
                cin>>id;
                
                cout << "File name: ";
                cin >> fname;
                readfileFind(fname, id);
                break;
            default:
                break;
        }
    } while (ch != 0);
    
    return 0;
}
