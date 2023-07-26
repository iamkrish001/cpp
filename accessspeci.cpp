#include<iostream>
using namespace std ; 
class Car {
public :
string name = "Lamborghini" ;
private :
string name1 = "Mustang" ; 
protected :
string name2 = " Porsche" ; 

};

int main (){
 Car c ;
    cout << c.name << endl ; 
    // cout << c.name1 << endl ;  // cannot be accessed 
}