//virtual function is the member function used to achieve runtime polymorphism which ensure that the right function is being called during function call in inheritance
#include<iostream>
using namespace std ; 

class Base {
    public :
    virtual void bola(){ // after using virtual void Derived is speaking
        cout << " Base is speaking !!"<< endl ; 
    }
};

class Derived : public Base {
    public :
     void bola(){
        cout << " Derived is speaking !!"<< endl ; 
    }
};

int main (){
    Base *bptr = new Derived ;  // without using virtual function even though the Derived class's bola func is pointer Base is speaking 
    bptr -> bola() ; 
}