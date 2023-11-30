#include<iostream>
using namespace std ; 

class Mykaxya{
public :

int students ; 
Mykaxya(int s){   // declaration of constructors
students = s;  
} 

// Mykaxya( Mykaxya &obj) {
//     students = obj.students ; 
// }



void display(){
    cout << " The no of students are " << students << endl ; 
}
~ Mykaxya(){
    cout << " Destructor called" ; 
}

};



int main (){

    Mykaxya kaxya1(20) ; 
    Mykaxya kaxya2(kaxya1) ;  // copy constructor 
    Mykaxya kaxya3(); 
    kaxya1.display() ; 
    kaxya1.display() ; 
}