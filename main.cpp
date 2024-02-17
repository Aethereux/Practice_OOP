#include <iostream>
using namespace std;
class Shape {
public:
    virtual double area(){ // Virtual Function
        cout << "This is a Shape\n";
    };
};
class Rectangle : Shape { // Derived Class Rectangle and Parent Class Shape. Inheritance.
private:
    float length, width;
public:
    Rectangle() // Default Constructor
    {
        length = 0;
        width = 0;
    }
    Rectangle(float len, float wid) { // Constructor
        length = len;
        width = wid;
    }
    double area () override { // Overriding function from the parent Class Shape
        return length * width;
    }
};
class Circle : Shape { // Derived Class Circle and Parent Class Shape. Inheritance.
private:
    double pi;
    float r;
public:
    Circle () { // Default Constructor
        pi = 3.141592653589793238462643383279502884197;
        r = 0;
    }
    Circle(float radius) { // Constructor
        pi = 3.141592653589793238462643383279502884197;
        r = radius;
    }

    double area () override { // Overriding the function from the parent Class Shape
        return pi * (r * r);
    }
};

int main() {
    // Initializing Objects from Classes Rectangle and Circle
    Rectangle rect(5,5); // Setting Values from the Constructor
    Circle circ(2); // Setting Values from the Constructor
    Shape shape;

    double results[2] = {rect.area(), circ.area()};
    cout << "Area of Rectangle: " << results[0] << endl; // Calling the overridden function from class Rectangle
    cout << "Area of Circle: " << results[1] << endl; // Calling the overridden function from the class Circle
    shape.area(); // Calling the Function area from the class Shape

    return 0;
}
