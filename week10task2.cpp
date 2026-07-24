#include <iostream>
using namespace std;

class Shape {
    public:
    virtual void draw() {
        cout << "Start Drawing" << endl;
    }
};
class Circle : public Shape {
    public:
    void draw()  override {
        cout << "Drawing Circle" << endl;
    }
};
class Rectangle : public Shape {
    public:
    void draw()  override {
        cout << "Drawing Rectangle" << endl;
    }
};
class Triangle : public Shape {
    public:
    void draw() override  {
        cout << "Drawing Triangle" << endl;
    }
};
int main(){
    Shape s;
    s.draw();
    Circle c;
    c.draw();
    Rectangle r;
    r.draw();
    Triangle t;
    t.draw();
    return 0;
}