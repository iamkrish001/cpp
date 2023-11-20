#include<iostream>
using namespace std ; 
class Parent{
public: 
int pub = 1; 
private:
int prv = 2 ; 
protected:
int pro = 3 ; 
};

class Child : protected Parent{   // initializing the protected child class from parent
    public:
int getPrv(){
    return prv ;
      }
    int getPub(){
        return pub ; 
    }
int getPro(){
    return pro  ; 
}
};

int main (){
Child sanobachha ; 
cout << "Private = It cannot be accessed" ; 
cout << "Public = "<< sanobachha.getPub()<<endl ; 
cout << "Protected = "<< sanobachha.getPro() ; 
}