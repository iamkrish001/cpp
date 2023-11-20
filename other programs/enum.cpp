#include <iostream>
#include <string>
using namespace std ; 

 enum Color {
RED, 
BLUE, GREEN
 };
int main(){
Color background ; 

background  = BLUE ;

    if ( background == BLUE){
        cout << "Background color is blue" ;
    }
    else
    {
        cout<< "Background color is red" ; 
    }
}
