/*Shape Sorting with Interfaces:
Problem Statement: Implement a shape sorting program. Define a base class Shape with properties like area and perimeter. Create derived classes like Circle, Rectangle, and Triangle. Implement an interface Sortable with a method to compare shapes by area. Use this interface to sort a list of shapes.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Interface for sortable objects
class Sortable {
public:
    virtual double getArea() const = 0;
    virtual bool compare(const Sortable* other) const = 0;
    virtual ~Sortable() {}
};

// Base class for shapes
class Shape : public Sortable {
protected:
    double area;
public:
    Shape(double area) : area(area) {}

    // Get area of the shape
    double getArea() const override {
        return area;
    }

    // Compare two shapes based on their areas
    bool compare(const Sortable* other) const override {
        return area < other->getArea();
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double radius) : Shape(3.14159 * radius * radius), radius(radius) {}
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double width, double height) : Shape(width * height), width(width), height(height) {}
};

// Derived class Triangle
class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double base, double height) : Shape(0.5 * base * height), base(base), height(height) {}
};

// Function to sort shapes based on their areas
void sortShapes(vector<Sortable*>& shapes) {
    sort(shapes.begin(), shapes.end(), [](const Sortable* a, const Sortable* b) {
        return a->compare(b);
    });
}

int main() {
    // Create some shapes
    Circle circle(5);
    Rectangle rectangle(4, 6);
    Triangle triangle(3, 4);

    // Store shapes in a vector of Sortable pointers
    vector<Sortable*> shapes = {&circle, &rectangle, &triangle};

    // Sort shapes based on their areas
    sortShapes(shapes);

    // Display sorted shapes
    for (const auto& shape : shapes) {
        cout << "Area: " << shape->getArea() << endl;
    }

    // Clean up memory
    for (auto& shape : shapes) {
        delete shape;
    }

    return 0;
}
