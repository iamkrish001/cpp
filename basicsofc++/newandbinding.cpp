// program of early and late biniding using new and delete keyword
// early binding  or compile time polymorphism
#include <iostream>
using namespace std ; 

// class A{
// public :
// void bol(){
//     cout << " A bolyo " << endl ; 
// }
// };

// class B: public  A {
// public :
// void bol(){
// cout << " B bolyo " << endl ; 
// }
// };

// int main (){
// A *Aptr = new B ; // a ko pointer banaye then it points to value of b class = allocation of memory for B
// Aptr -> bol() ; 

// }


// late binding or run time polymorphism
#include <iostream>
using namespace std ; 

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
A *Aptr = new B ; // a ko pointer banaye then it points to value of b class = allocation of memory for B
Aptr -> bol() ; 

}