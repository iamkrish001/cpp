#include<iostream>
using namespace std ;

template <typename T, typename F>
class Height{
    private :
    T feet ;
    F inch ; 
    public : 

    // void setfeet(T f){  
    //     feet = f ; 
    // }
    // T getfeet(){
    //     return feet; 
    // }
    // void setinch(F i){  
    //    inch = i ; 
    // }
    //  F getinch(){
    //     return inch; 
    // }

    void setheight(T f, F i ){
        feet  = f; 
        inch = i ;

    }

    F getheight(){
        return (feet+inch) ; 
    }
};

int main (){
    
    Height <int, float> obj1; 
    // obj1.setfeet(6) ; 
    // obj1.setinch(0.1) ; 
    obj1.setheight(6,0.1) ; 
    // cout << " He is  "<< obj1.getfeet()<< " feet tall" <<endl ; 
    // cout << " He is  "<< obj1.getinch()<< " inch tall" <<endl ; 
    cout << " He is  "<< obj1.getheight()<< " feet tall" <<endl ; 
}