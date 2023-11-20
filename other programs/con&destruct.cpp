#include<iostream>
using namespace std ; 

class Meroclass {

    public :
     string info ; 

     Meroclass(string i ){
info  = i 
     }

     ~ Meroclass( string i ){
        info  = i ; 
     }
};

int main (){
    Meroclass m1("Constructor and destructor") ; 
    cout<< m1.info ; 
} 