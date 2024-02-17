#include <iostream>
#define pi 3.141592653589793238462643383279502884197
using namespace std;
class Shape {
protected:
    double length, width, height, radius;
public:
    Shape() {
        length = 0; width = 0; height = 0; radius = 0;
    }
    virtual double area(){ // Virtual Function
        cout << "This is a Shape\n";
    };
};
class Rectangle : public Shape { // Derived Class Rectangle and Parent Class Shape. Inheritance.
public:
    Rectangle(double len, double wid) {
        length = len;
        width = wid;
    }
    double area() {
        return length * width;
    }
};
class Circle : public Shape { // Derived Class Circle and Parent Class Shape. Inheritance.
public:
    Circle (double rad) {
        radius = rad;
    }
    double area () {
        return pi * (radius * radius);
    }
};
int main() {
    // Initializing Objects from Classes Rectangle and Circle
   Shape * shapes[2] = {new Rectangle(5,10), new Circle(5)};
   Shape shape;
    // Calling the Function area from the class Shape
    cout << "Area of Rectangle: " <<shapes[0]->area() << endl; // Calling the overridden function from class Rectangle
    cout << "Area of Circle: " << shapes[1]->area() << endl; // Calling the overridden function from the class Circle
    shape.area(); // Calling the function from the class Shape
    return 0;
}
