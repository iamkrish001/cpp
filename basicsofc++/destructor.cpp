#include<iostream>
using namespace std ;
 

 class Test{
public :
int a ;

Test(int num){
    cout << " Created " ; 
a = num ; 
}

~Test(){
    cout << " Destroyed" ; 
}

void provoke(){
    cout << " The number is "<< a << endl ; 
}
 };

 int main (){
    Test t(4);
t.provoke();


 }