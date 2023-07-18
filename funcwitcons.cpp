#include<iostream>
using namespace std ; 
class Car {
    public :
    string brand ;
    int number ; 
    int model ; 
    Car(string x, int y , int z) {  // create constructer with parameters 
        brand= x; // declares brand with x 
        number = y ; 
        model = z ; 
    }
};

int main (){

    Car c1("Mustang", 0001 , 2008) ; // creates an object c1 with arguments 
    Car c2("Lamborghini Reveulto", 0002, 2022) ;

    cout << c1.brand <<" " << c1.number << " "<< c1.model<< endl ; 
      cout << c2.brand <<" " << c2.number << " "<< c2.model ; 

 }