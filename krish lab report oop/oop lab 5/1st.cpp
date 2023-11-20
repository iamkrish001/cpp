#include <iostream>

using namespace std;

class Shape {
public:
    virtual double area() const {
        return 0.0;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159265359 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }
};

int main() {
    Shape* shapes[3];
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Circle(3.0);

    for (int i = 0; i < 3; i++) {
        cout << "Area of shape " << i + 1 << ": " << shapes[i]->area() << endl;
        delete shapes[i];
    }

    return 0;
}