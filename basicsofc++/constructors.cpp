// special member function that has the same name as its class name and has no return type and is used to construct objects during initialization
#include <iostream>
using namespace std ;
 
 class Vehicle{
public :
    string brand;
    int model ;
    string engine_type ; 

  void printdetails(){
    cout << " Brand - " << brand << endl ; 
    cout << " model - " << model << endl ; 
    cout << " engine_type - " << engine_type << endl ; 
}

 Vehicle(string b , int m , string et){  //declaration of constructors outside the class
    brand = b ;
    model = m ; 
    engine_type = et ; 

 }


 Vehicle(string, int) ; 
 void display() ; 
 } ; 

 Vehicle:: Vehicle(string b, int m){  // constructor outside class
brand = b ; 
model = m ; 

 }

 void Vehicle ::display(){
  cout << " Brand - " << brand << endl ; 
    cout << " model - " << model << endl ; 
 }
 

int main (){

    Vehicle cars1("Lambo Reveulto", 2023, "V12") ;  // implicit call
    Vehicle cars2("Lambo Huracan", 2023, "V14") ;
    Vehicle cars3("Lambo Aventador", 2023, "V10") ; // these are constructor that are overloaded with reference to the number of parameters given
    Vehicle cars4("Lambo Urus", 2023, "V10") ;
    Vehicle bike1("Kawasaki Ninja", 2022) ;

// explicit call
Vehicle bike2 = Vehicle("Harley Davidson", 2021) ; 

   cars1.printdetails() ;  
   cars2.printdetails() ;  
   cars3.printdetails() ;  
   cars4.printdetails() ;  
   bike1.display();
   bike2.display();
}




