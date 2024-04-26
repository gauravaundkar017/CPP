/*7. Write a menu driven program to do following operations :
a) Compute area of circle
b) Compute area of rectangle
c) Compute area of triangle
d) Exit
Display menu, ask choice to the user, depending on choice accept the parameters and perform the 
operation. Continue this process until user selects exit option*/

#include <iostream>
#include <cmath>

using namespace std;

void computeCircleArea() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area = M_PI * radius * radius;
    cout << "Area of the circle: " << area << endl;
}

void computeRectangleArea() {
    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    double area = length * width;
    cout << "Area of the rectangle: " << area << endl;
}

void computeTriangleArea() {
    double base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    double area = 0.5 * base * height;
    cout << "Area of the triangle: " << area << endl;
}

int main() {
    char choice;
    do {
        cout << "\nMenu:\n";
        cout << "a) Compute area of circle\n";
        cout << "b) Compute area of rectangle\n";
        cout << "c) Compute area of triangle\n";
        cout << "d) Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'a':
                computeCircleArea();
                break;
            case 'b':
                computeRectangleArea();
                break;
            case 'c':
                computeTriangleArea();
                break;
            case 'd':
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 'd');

    return 0;
}
