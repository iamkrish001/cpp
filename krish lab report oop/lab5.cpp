//1.	Write a program to calculate area and perimeter by user input data using the concept of class and object.
 
#include <iostream>
 
using namespace std;
 
class Rectangle {
  private:
    double length;
    double width;
 
  public:
    Rectangle(double len, double wid) {
        length = len;
        width = wid;
    }
 
    double calculateArea() {
        return length * width;
    }
 
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};
 
int main() {
    double length, width;
 
    cout << "Enter the length of the rectangle: ";
    cin >> length;
 
    cout << "Enter the width of the rectangle: ";
    cin >> width;
 
    Rectangle rect(length, width);
 
    cout << "Area: " << rect.calculateArea() << endl;
    cout << "Perimeter: " << rect.calculatePerimeter() << endl;
 
    return 0;
}