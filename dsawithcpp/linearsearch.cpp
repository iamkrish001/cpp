// process of searching for a value in a sequential order
#include<iostream>
using namespace std ; 
int main (){

    int a[10] = {0,1,2,3,4,5,6,7,8,9} ;
    // required answer is 5
    int i ;
    for ( int i =0 ;i<10; i++){
        if(a[i]!=5)
        {
            cout << "\t" ; 
        }
        else
        {
            cout << " the required no is" << a[i] << endl ; 
        }
    }
}