// wap to set and get a value 
// it is used when sth needs to be set and the variable of the class is private so you can not access it directly

#include <iostream>
using namespace std ; 


class Kathmandu {

    private :
    string pollution ;


public : 
    string getPoll(){
        return pollution ; 
    }

    void setPoll(string p){
     pollution = p ; 
    }
};

int main (){

    Kathmandu Baneshwor ; 
Baneshwor.setPoll(" low") ; 
    cout << " Before 10 years , the pollution was" << Baneshwor.getPoll() << endl ; 
    Baneshwor.setPoll("high") ; 

    cout << " The pollution of baneshwor after 10 years is " << Baneshwor.getPoll() << endl ; 
   

}