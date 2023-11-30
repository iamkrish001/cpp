// manipulators are functions that give certain formatting of the output in c++
#include<iostream>
#include<iomanip>
using namespace std; 

int main(){
int x = 3;
float y = 3.555555 ; 
cout << x << endl ; //endl
//using endl gives new line

cout << setw(5) << x<<endl ;  // sets the width to 5 character spacing
cout << showpos << x << endl; //showpos forces all positive integer to have a + sign
cout << setprecision(2) << y ; // setprecision() sets precise no in a float value
}