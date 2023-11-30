//swaping two numbers using pass by value and reference
#include<iostream>
using namespace std ;
 
// void PassByValue(int x , int y){         values are not being swaped because x and y exists only in this function code and not in the main function 
// int z ;
// z=x; 
// y = z ;
// x= y ; 

// } 

 void Passbyreference(int &x , int &y){         // values are being swaped because x and y has the same address as a and b 
int z ;
z=x; 
x = y ; 
y = z ;  

} 


int main (){
    int a = 4, b= 5 ;
    cout << "Before swapping :" << a << endl << b << endl;
    // PassByValue(a,b);
    Passbyreference(a,b);
    cout << "After swapping :" << a << endl << b << endl;
    
}