#include<iostream>
#include<math.h>
using namespace std; 
class CalculateArea {
    public :
double area ;
CalculateArea(double r) {                // circle
    area = 3.14 * r* r ; 
}
CalculateArea (double l , double b) {   // rectangle
    area = l * b ; 
}
void Displayresult(){
cout << "The area is " << area ; 
}
};


int main (){

    cout << "Enter any options below :" << endl ; 
    cout <<  "1. Calculate the area of circle" << endl ; 
    cout <<  "1. Calculate the area of rectangle" << endl ; 
int option ; 
cin >> option ; 
switch (option)
{
case 1: 
{
    double r ; 
    cout << "Enter the radius"<< endl ; 
    cin >> r ; 
    CalculateArea circle(r) ;
    circle.Displayresult() ; 
} break ; 
case 2 :
{
    double l ,b  ; 
    cout << "Enter the radius"<< endl ; 
    cin >>l>>b ; 
    CalculateArea rectangle(l, b) ;
   rectangle.Displayresult() ; 
} break ; 
}
}
