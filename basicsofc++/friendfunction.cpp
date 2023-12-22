// friend function , used to directly access the private and protected data members of a class , friend function is defined outside the class
#include <iostream>
using namespace std ; 

class Calculation {

    private :
    int a ; 

public : 
 Calculation(){
    a= 0 ; 
 }
   friend void calculator( Calculation &c) ; 

   void displaydata(){
    cout << " the value is  " << a << endl ; 
   }
};

// defining friend function
void calculator(Calculation &c){
    c.a = c.a + 3 ; 
}



int main (){
    // default constructor is called here
    Calculation c1 ; 
    c1.displaydata() ;  // value must be 0 
    calculator(c1); // called by reference
    c1.displaydata() ;  // value must be 3 
    
}