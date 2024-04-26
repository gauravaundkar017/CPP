/*Shape Hierarchy:
Problem Statement: Design a hierarchy of shape classes. Begin with a base class Shape and then create derived classes like Circle, Rectangle, and Triangle. Each shape should have methods for calculating area and perimeter specific to its geometry..*/
#include <iostream>
#include <cmath>

// Base class Shape
class Shape {
public:
    virtual float area() const = 0; // Pure virtual function for calculating area
    virtual float perimeter() const = 0; // Pure virtual function for calculating perimeter
};

// Derived class Circle
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    float area() const override {
        return M_PI * radius * radius;
    }

    float perimeter() const override {
        return 2 * M_PI * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float area() const override {
        return length * width;
    }

    float perimeter() const override {
        return 2 * (length + width);
    }
};

// Derived class Triangle
class Triangle : public Shape {
private:
    float side1, side2, side3;

public:
    Triangle(float s1, float s2, float s3) : side1(s1), side2(s2), side3(s3) {}

    float area() const override {
        float s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    float perimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    // Example usage
    Circle circle(5);
    Rectangle rectangle(4, 6);
    Triangle triangle(3, 4, 5);

    std::cout << "Circle - Area: " << circle.area() << ", Perimeter: " << circle.perimeter() << std::endl;
    std::cout << "Rectangle - Area: " << rectangle.area() << ", Perimeter: " << rectangle.perimeter() << std::endl;
    std::cout << "Triangle - Area: " << triangle.area() << ", Perimeter: " << triangle.perimeter() << std::endl;

    return 0;
}
