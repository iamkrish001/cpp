#include<iostream>
using namespace std ;
 
// template<typename T> 
// T add(T x , T y ){
// return x+y ; 
// }

// int main (){
//     cout << " sum of integer is "<<add<int>(2,3) << endl ; 
//     cout << " sum of float is "<<add<float>(2.68f,3.56f) << endl ; 
//     cout << " sum of double is "<<add<double>(2.384d,3.643d) << endl ; 
//     return 0 ; 
// }

// what if i want to add a integer and float using templates
template <typename I, typename F>
I add(I x, F y){
    return x+y ; 
}
int main (){
    cout << " The sum of two variables 3 and 6.9  is : "  << add<float>(3, 6.9f) << endl ; 
    
    cout << " The sum of two variables 3 and 6.9 but using int is : " <<add<int>(3, 6.9f) << endl ;  // the I add( ) will take the int data type and will return 9 
}