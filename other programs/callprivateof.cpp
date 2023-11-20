#include<iostream>
using namespace std ; 

// how to call private data outside class

class Car{

    private:
    string name ; 
public:
    void setcar(string n){
 name = n ; 
    }
    string getcar(){
    return name ; 
    }
};

int main(){
    Car c1 ; 
    c1.setcar("Lambo") ; 
    cout<< c1.getcar() ; 
}