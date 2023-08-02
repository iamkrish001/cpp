#include<iostream>
using namespace std ; 

class Parent{
  public :
  int pub = 1; 
  private :
int  prv = 2 ; 
  protected:
  int pro = 3 ; 
};

class Child : public Parent{    // Accessing the parent class
public :
// method to access pub
int getPub(){
  return pub ; 
}
public :
// met to access pro
int getPro(){
  return pro ; 
}
};

int main (){

  Child child1 ;  // creating the object of child class 
  cout << " Public = " << child1.getPub() << endl ; 
  cout << "Protected = " << child1.getPro() << endl ; 
}