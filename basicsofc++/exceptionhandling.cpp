#include<iostream>
using namespace std ;

int main (){
    int num , den, result ; 

cout << " Enter num "<< endl ;
cin >> num ; 
cout << " Enter den " << endl ; 
cin >> den ; 

try {  // place the try block wherever you feel the exception is going to be occured
   
if (den ==0 || den == 'a' || den == 00){
    throw den ;  // if denominator is 0 then throw denominator 
    throw 'a' ; 
    throw 00 ; 
}
  result = num / den ; 

}
catch(...){   // catch the thrown value and print sth
    cout << " Exception: den cannot be 0 " ; 
}

cout << " Division is : " << result <<endl ; 
    return 0 ; 
}