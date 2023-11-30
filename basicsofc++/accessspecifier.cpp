// public can be accessed outside and inside the class
// protected can by accessed by the derived class through  but cannot be directly accessed using dot operator
// private cannnot be accessed by any derived classes
#include<iostream>
using namespace std ;

class A{

    protected:
    int y ;
    private:
    int z ; 

    public:
    int x ;
    A(){
        x=1; 
        y=2;
        z=3;
    }
   
};

// inheritance of class A
class B :public A {
// public x;
// protected y ; 

// process to access protected member 
public:
void sety(int y1){
    y = y1 ; 
}
int gety(){
    return y ; 
}

};
int main (){
    A a1;
    B b1; 
    b1.sety(2) ;
    cout << " X is" << b1.x << endl ; 
    cout << " Y is" << b1.gety()<< endl ; // cannot be accessed directly 
    // cout << " X is" << a1.z << endl ; 
}