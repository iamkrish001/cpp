#include<iostream>
using namespace std ; 

class Employee {

    public :
    int empid ;
    char name ; 
    int salary ; 

    void Getdata(){
        cout << "Enter your emp id" << endl ; 
        cin >> empid ; 
        cout << "Enter your name " << endl ;
        cin >> name ; 
        cout << " Enter your salary" << endl ; 
        cin >> salary ; 
    }

    void displaydata(){
        cout << empid << "\t" << name << "\t"<< salary ; 
    }
};

int main (){
    Employee e[3] ; 
  cout << " Enter the details of employee " ; 
    for ( int i = 0 ; i< 3 ; i++){
        e[i].Getdata(); 
    }

cout << " The entered information is : " ; 
 cout <<   "empid \t name \t salary "  ; 
 for ( int i = 0 ; i< 3 ; i++){
        e[i].displaydata() ; 
    }

}