//A class is an abstract class because it has a pure virtual function which have no implementation
#include <iostream>
using namespace std ; 

class A{
    public : 
    virtual void getlength() = 0 ; // declaration a virtual void function , it contains no implementation because a do not have any length
};

class Cylinder : public A {
    public :
    void getlength(){
        cout << " the length of cylinder is 2.4" << endl ; 
    }
};

class Rectangle : public A {
    public :
    void getlength(){
        cout << " the length of Rectangle is 5.4" << endl ; 
    }
};

int main (){
Cylinder c1 ;
Rectangle r1 ;
c1.getlength();
r1.getlength(); 
}