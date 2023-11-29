#include<iostream>
using namespace std; 

class A{
public : 
virtual void bol()= 0  ;    // pure virtual function declared inside the class and defined outside the class
};

void bol()
    {
    cout << " A bolyo " << endl ; 

}

class B: public  A {
public :
void bol(){
cout << " B bolyo " << endl ; 
}
};

int main (){
A *ptr = new B;
 ptr-> bol() ; 
}