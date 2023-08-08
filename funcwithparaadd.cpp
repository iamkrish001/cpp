#include <iostream>
using namespace std ; 
int AddTwo(int a, int b ){   // created functions with paramters 
return  a+b   ;   // returns the value of a+b , it goes to AddTwo function
}
int main (){ 
    int a,b ; 
cout<< "Enter any two numbers"<< endl ;
cin>> a >>  b ; 
cout << " The sum is " <<  AddTwo(a,b) << endl ;   // the function is called here with entered parameters 

}
