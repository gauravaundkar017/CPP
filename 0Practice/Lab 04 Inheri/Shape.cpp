/*Shape Hierarchy:
Problem Statement: Design a hierarchy of shape classes. Begin with a base class Shape and then create derived classes like Circle, Rectangle, and Triangle. Each shape should have methods for calculating area and perimeter specific to its geometry.*/

#include <iostream>
#include <cmath>

using namespace std;

class Shape
{
public:
    virtual double area() = 0 ;
    virtual double perimeter() = 0;
    ~Shape(){}
};


class Circle : public Shape{
    double r;
    public :
        Circle (double r) : r(r){}
        
        double area() {
            return M_PI * r * r;
        }
        double perimeter() {
            return 2 * M_PI * r;
        }


};

class Rectangle : public Shape{
    double l,w;
    public :
        Rectangle (double l , double w) : l(l), w(w){}
        
        double area(){
            return  l * w;
        }
        double perimeter() {
            return 2 * (l + w);
        } 
};
class Triangle : public Shape{
    double s1,s2,s3;
    public :
        Triangle (double s1 , double s2, double s3) : s1(s1), s2(s2), s3(s3){};
        
        double area()  {
            double s = (s1 + s2 + s3)/2;
            return  sqrt(s * (s - s1) * (s - s2) *(s - s3) );
        }
        double perimeter  () {
            return s1 + s2 + s3;
        } 
};
int main() {
    Circle c(5);
    Rectangle rectangle(4, 6);
    Triangle triangle(3, 4, 5);

    cout << "Circle: Area = " << c.area() << ", Perimeter = " << c.perimeter() << endl;
    cout << "Rectangle: Area = " << rectangle.area() << ", Perimeter = " << rectangle.perimeter() << endl;
    cout << "Triangle: Area = " << triangle.area() << ", Perimeter = " << triangle.perimeter() << endl;

    //  Shape* shapes[3];
    // shapes[0] = new Circle(5);
    // shapes[1] = new Rectangle(4, 6);
    // shapes[2] = new Triangle(3, 4, 5);

    // for (int i = 0; i < 3; ++i) {
    //     cout << "Shape " << i + 1 << ": Area = " << shapes[i]->area() << ", Perimeter = " << shapes[i]->perimeter() << endl;
    // }


    // for (int i = 0; i < 3; ++i) {
    //     delete shapes[i];
    // }


    return 0;
}
