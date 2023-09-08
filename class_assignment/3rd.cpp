#include <iostream>
using namespace std ; 

class Height{
// float h_dad = 5.8 ;   // initializing the height of dad and mom
// float h_mom = 4.11 ;  
};

 double Height(double h_dad, double h_mom){  // create a method and pass 
    return h_dad + h_mom ; 
}
int main (){

    cout << " The total height of the family  is " <<  Height(5.8 , 4.11)  << endl ; 
}