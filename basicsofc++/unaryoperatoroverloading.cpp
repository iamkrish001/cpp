#include<iostream>
using namespace std ;

class Weight{
    public:
    int kg ; 

    Weight(){
        kg = 0 ; 
    }

    void printweight(){
        cout << "Weight is: " << kg << endl ;  
    }

    void operator ++(){  // pre increment operator overloading
        ++kg ; 
    }

    void operator ++ (int){         // post increment operator overloading
        kg ++ ; 
    }

    void operator  --(){         // pre decrement operator overloading
        --kg  ; 
    }

    void operator  --(int){         // post decrement operator overloading
        kg -- ; 
    }

};

int main (){
    Weight obj ;
    obj.printweight() ; 
    ++obj ; 
    obj.printweight() ; 
    obj++ ; 
    obj.printweight();
    --obj ; 
    obj.printweight(); 
    obj-- ; 
    obj.printweight(); 

}