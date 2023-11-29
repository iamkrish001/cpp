#include<iostream>
using namespace std ;
 

 class Sathi{
    friend class Merosathi  ; 
    private :
    int x  ; 
    public : 
    Sathi(int a) {
        x = a ; 
    }
 };

class Merosathi{
    public :
  void skv(Sathi obj){
    cout << " sathi ko value is:  " << obj.x << endl ; 
  }
 };

int main (){
   Sathi s1(5) ;
   Merosathi s2 ; 
   s2.skv(Sathi) ;  
   return 0 ; 
}