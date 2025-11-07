#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

class Shape {
public:
    virtual void display() const = 0;
    virtual double area() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void display() const override { cout << "Circle with radius " << radius << endl; }
    double area() const override { return M_PI * radius * radius; }
};

class Rectangle : public Shape {
    double len, wid;
public:
    Rectangle(double l, double w) : len(l), wid(w) {}
    void display() const override { cout << "Rectangle " << len << "x" << wid << endl; }
    double area() const override { return len * wid; }
};

int main() {
    vector<Shape*> shapes;
    shapes.push_back(new Circle(5.0));
    shapes.push_back(new Rectangle(10.0, 4.0));
    cout << fixed << setprecision(2);
    for (Shape* s : shapes) {
        s->display();
        cout << "Area: " << s->area() << endl;
    }
    for (Shape* s : shapes) delete s;
    return 0;
}