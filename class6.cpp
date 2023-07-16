#include <iostream>
using namespace std ; 
int main ()
{

    class Car {
   protected:    
    string color ; 
     string name ;
    };

    class ProtectedDerive : protected Car {
        public :
        void Carcolor(){
            cout << " The color of the car is red" ; 
        }
    }; 
    int main (){
    Car lambo ; 
    cout << lambo.Carcolor ; 
    }


}