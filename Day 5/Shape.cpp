/*3:Create a abstract class Shape with pure virtual method area;
Create Rectangle,Circle,Square class..inherit them from Shape class..Override area method.
Test these all classes by creating object of respective class.*/

#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area()  = 0;
};


class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area(){
        return length * width;
    }
};


class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() {
        return 3.14 * radius * radius;
    }
};

class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double area()  {
        return side * side;
    }
};

int main() {
    Rectangle rectangle(5.0, 3.0);
    Circle circle(2.5);
    Square square(4.0);

    cout << "Area of Rectangle: " << rectangle.area() << endl;


    cout << "Area of Circle: " << circle.area() << endl;


    cout << "Area of Square: " << square.area() << endl;

    return 0;
}
