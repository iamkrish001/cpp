#include<iostream>
using namespace std;

class A {
    public :
    void print(){
        cout <<" I am class A" << endl; 
    }
    
};

class B {
    public :
    void print(){
        cout <<" I am class B" << endl; 
    }
    
};

class C : public A, public B {
    // it also calls print of class and and B , that is called ambiguity
    // this is solved using scope resolution operator
     public:
     void print(){
         A :: print(); 
         B :: print(); 
     }
};

int main (){
    C obj ;
    obj.print();
}