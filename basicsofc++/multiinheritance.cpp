// program using multiple inheritance
#include<iostream>
using namespace std ; 

class A{
public :
int x ; 
void enterx(){
    cout << " enter x" ; 
    cin >> x ; 
}
} ;

class B{
public :
int y ; 
void entery(){
    cout << " enter y" ; 
    cin >> y ; 
}
} ;

class C : public A , public B {
public :
 int c ; 
 void printc(){
  c = x +y  ; 
cout << " the sum is " << c  << endl ; 
 }

};
int main (){
    C obj ; 
    obj.entery();
    obj.enterx() ; 
    obj.printc() ; 
}
