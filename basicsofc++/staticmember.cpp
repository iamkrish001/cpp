// static member data is used to give a constant value for all objects of a class
// the object is needed to be created, rather we can call it by the class name

#include <iostream>
using namespace std ;
 

class Static{

    private :
    static int count ; 


   public :
    Static(){   // default constructor
    count++ ; 
    } 
    static int getcount(){   // static memeber function created
        return count ; 
    }
}; 

// defining the static value
int Static :: count = 0 ; 

int main (){
cout << " count value is :" << Static :: getcount() << endl ; 
Static obj1, obj2 , obj3 , obj4 ; 
cout << " count value after creating of obj1 is :" << Static :: getcount() << endl ;   //  everytime the object is created the default constructor is called and the value of count is increased by 1 
}
