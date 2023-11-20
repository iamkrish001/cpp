#include <iostream>
using namespace std ; 
class Class{
public: 
int roll; 
string name;

//  Class(int r, string n){
// roll = r ; 
// name = n ; 
// }

// declaration of constructor
Class( int r, string n) ; 
};

Class :: Class(int r, string n){
    roll = r ;
    name = n ; 
}
int main (){

    Class c1( 13, "krish") ; 
    Class c2(21, "Aman") ; 
    cout << c1.roll << endl << c1.name << endl ;
    cout << c2.roll << endl << c2.name << endl ;

}