#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void calculateArea() = 0;
};

// Circle class
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    void calculateArea() override {
        double area = 3.142 * radius * radius;
        cout << "Area of Circle = " << area << endl;
    }
};

// Rectangle class
class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void calculateArea() override {
        double area = length * width;
        cout << "Area of Rectangle = " << area << endl;
    }
};
int main(){
    
    Circle c(5.0);
    c.calculateArea();  
    Rectangle r(4.0, 3.0);
    r.calculateArea();
    return 0;
}
