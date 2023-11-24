#include <iostream>
using namespace std ;
 
 class Satellite{

    public :
    string name ; 

Satellite (){
}

Satellite(string n ) { // constructor declaration
    name = n ; 
   } 

Satellite& operator + ( Satellite& c) {
    Satellite temp ; 
    temp.name = name + c.name ; 
    return temp ; 
 }

 void displayinfo(){
    cout << " The  satellite is " << name << endl ; 
 }  
 };


 int main (){
Satellite A21("A21") ;
Satellite A27("A27");
Satellite C22("");
C22 = A21+ A27 ;  // computer does not know how to add user defined function or structure 
cout << C22 ; 
 }