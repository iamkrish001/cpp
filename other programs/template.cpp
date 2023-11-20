// #include<iostream>
// using namespace std ; 

// template < typename T> 
// T myfunc(T x , T y){
// return x+y ; 
// };

// int main (){
//     cout<< myfunc<int>(3,4)<< endl ; 
//     cout << myfunc<float>(3.4,5.5)<< endl   ; 
//     return 0 ; 
// }

// class template

#include<iostream>
using namespace std ; 

template <class T> class Car{
    public :
  

Car(){
    cout<<"This is a car" ; 
}


} ;

int main (){
    Car < int >a ;
    return 0 ; 
}