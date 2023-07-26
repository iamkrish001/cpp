//Write a program in  C++ program to calculate the area of triangle, rectangle and circle using constructor overloading. The program should be menu driven.
 
 
 
 
#include<iostream>
using namespace std;
 
class areaNperi{
    private:
    static float PI;
    float a,b;
    public:
 
    //for Circle
    void setCirar(float x){
        cout<<"Enter the radius of Circle: ";
        cin>>x;
        a=x;
    }
    void getCirar(){
        cout<<"The area and circumference of circle is "<<PI*a*a<<" and "<<2*PI*a<<" respectively\n";
    }
 
    //for Rectangle
    void setRect(float x, float y){
        cout<<"Enter the side of Rectangle: ";
        cin>>x>>y;
        a=x;
        b=y;
    }
    void getRect(){
        cout<<"The area and perimeter of Rectangle is "<<a*b<<" and "<<2*(a+b)<<" respectively\n";
    }
 
    //for Square
    void setSquar(float x){
        cout<<"Enter the length: ";
        cin>>x;
        a=x;
    }
    void getSquar(){
        cout<<"The area and perimeter of Square is "<<a*a<<" and "<<4*a<<" respectively\n";
    }
 
};
 
float areaNperi::PI=3.1415;
int main(){
 
    areaNperi circle, Rectangle, Square;
    float r,h;
    int choice;
    cout<<"what do you want to find the area of?\n1. Circle\n2. Rectangle\n3. Square\n";
    cin>>choice;
        while(choice<1||choice>3){
            cout<<"You entered invalid number! Try Again\n";
            cin>>choice;
            if(choice>=1&&choice<=2){
                break;
            }
        }
    switch(choice){
        case 1: circle.setCirar(r);
                circle.getCirar();
                break;
 
        case 2: Rectangle.setRect(r,h);
                Rectangle.getRect();
                break;
 
        case 3: Square.setSquar(r);
                Square.getSquar(); 
                break;
        }
	return 0;
}
 
 
 
 
 
 
 
 
 
