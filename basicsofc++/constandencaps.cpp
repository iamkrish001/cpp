#include<iostream>
using namespace std ; 

class Employee{
    public :
    string Name ; 
    int Age ;
    float Emp_id ; 

    void SichVorstellen(){
        cout << "Name " << Name << endl ;
        cout << "age " << Age << endl ;
        cout << "emp_id " << Emp_id << endl ;
    
    }
public :
    // creating a constructor 
    Employee( string name , int age , float emp_id  ){         // no return type + the values are passed in the constructors as parameters
        Name = name ; 
        Age = age ; 
        Emp_id = emp_id ;         
    }
};

int main(){
     Employee e1("Krish", 19, 2.2) ; // or 
     // Employee e1 = Employee("Krish", 19, 2.2) ;
    e1.SichVorstellen() ; 

     Employee e2("Ram", 20, 4.3) ; 
     e2.SichVorstellen() ; 
    // what if I need to print this of 1000 employees, this is where the constructor's role comes into play
}
