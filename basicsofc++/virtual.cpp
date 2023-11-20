#include<iostream>
using namespace std; 

class A{
public :
virtual void bol(){
    cout << " A bolyo " << endl ; 
}
};

class B: public  A {
public :
void bol(){
cout << " B bolyo " << endl ; 
}
};

int main (){
A *ptr ;
B obj ; 
ptr = &obj ; 
 ptr-> bol() ; 
}