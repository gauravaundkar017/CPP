#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Base class Shape
class Shape {
protected:
    double area;
    double perimeter;

public:
    Shape(double _area, double _perimeter) : area(_area), perimeter(_perimeter) {}

    double getArea() const {
        return calculateArea();
    }

    // Pure virtual method to calculate area
    virtual double calculateArea() const = 0;
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double _radius) : Shape(0, 0), radius(_radius) {}

    double calculateArea() const override {
        return 3.14159 * radius * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double _width, double _height) : Shape(0, 0), width(_width), height(_height) {}

    double calculateArea() const override {
        return width * height;
    }
};

// Derived class Triangle
class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double _base, double _height) : Shape(0, 0), base(_base), height(_height) {}

    double calculateArea() const override {
        return 0.5 * base * height;
    }
};

// Comparator function for sorting shapes by area
bool compareArea(const Shape* a, const Shape* b) {
    return a->getArea() < b->getArea();
}

int main() {
    // Create a vector of shapes
    vector<Shape*> shapes;
    shapes.push_back(new Circle(5));
    shapes.push_back(new Rectangle(4, 6));
    shapes.push_back(new Triangle(3, 4));

    // Calculate and set areas
    for (Shape* shape : shapes) {
        shape->calculateArea();
    }

    // Sort the shapes by area
    sort(shapes.begin(), shapes.end(), compareArea);

    // Display sorted shapes
    cout << "Sorted Shapes by Area:" << endl;
    for (const Shape* shape : shapes) {
        cout << "Area: " << shape->getArea() << endl;
    }

    // Clean up allocated memory
    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}
