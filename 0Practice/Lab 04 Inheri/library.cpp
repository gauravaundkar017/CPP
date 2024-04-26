
/*Library Catalog with Books and Journals:
Problem Statement: Build a library catalog system. Create a base class LibraryItem with properties like title and author. Then, derive classes like Book and Journal, each with their unique properties. Implement methods to check out and return items in the derived classes.*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Base class LibraryItem
class LibraryItem {
protected:
    string title;
    string author;
    bool checkedOut;
public:
    LibraryItem(string title, string author) : title(title), author(author), checkedOut(false) {}

    // Method to check out the item
    void checkOut() {
        if (!checkedOut) {
            checkedOut = true;
            cout << title << " by " << author << " has been checked out." << endl;
        } else {
            cout << "Sorry, " << title << " by " << author << " is already checked out." << endl;
        }
    }

    // Method to return the item
    void returnItem() {
        if (checkedOut) {
            checkedOut = false;
            cout << title << " by " << author << " has been returned." << endl;
        } else {
            cout << "There is no record of " << title << " by " << author << " being checked out." << endl;
        }
    }

    // Virtual destructor
    virtual ~LibraryItem() {}
};

// Derived class Book
class Book : public LibraryItem {
private:
    int numPages;
public:
    Book(string title, string author, int numPages) : LibraryItem(title, author), numPages(numPages) {}

    // Method to display book information
    void displayInfo() const {
        cout << "Book: " << title << " by " << author << ", Pages: " << numPages;
        if (checkedOut) {
            cout << " (Checked out)";
        }
        cout << endl;
    }
};

// Derived class Journal
class Journal : public LibraryItem {
private:
    int issueNumber;
public:
    Journal(string title, string author, int issueNumber) : LibraryItem(title, author), issueNumber(issueNumber) {}

    // Method to display journal information
    void displayInfo() const {
        cout << "Journal: " << title << " by " << author << ", Issue Number: " << issueNumber;
        if (checkedOut) {
            cout << " (Checked out)";
        }
        cout << endl;
    }
};

int main() {
    // Creating instances of Book and Journal
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 180);
    Book book2("To Kill a Mockingbird", "Harper Lee", 281);
    Journal journal1("Nature", "Nature Publishing Group", 123);
    Journal journal2("Science", "American Association for the Advancement of Science", 456);

    // Checking out and returning items
    book1.checkOut();
    journal1.checkOut();
    book1.returnItem();
    book2.checkOut();
    journal1.returnItem();
    journal2.checkOut();

    // Displaying information about items
    cout << "Library Catalog:" << endl;
    book1.displayInfo();
    book2.displayInfo();
    journal1.displayInfo();
    journal2.displayInfo();

    return 0;
}
