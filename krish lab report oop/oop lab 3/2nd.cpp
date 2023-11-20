
#include<iostream>
using namespace std;
 
class Operator_Overloading{
    int x;
    public:
        Operator_Overloading(int a){
            x=a;
        }
        int get_value(){
            return x;
        }
        friend bool operator>(const Operator_Overloading &S1, const Operator_Overloading &S2);
        bool operator<(const Operator_Overloading &S1);
};
 
bool operator>(const Operator_Overloading& S1, const Operator_Overloading& S2){
    return S1.x>S2.x?true:false;
}
 
bool Operator_Overloading::operator<(const Operator_Overloading& S1){
    return x>S1.x?true:false;
}
 
int main(){
    Operator_Overloading obj1(56), obj2(87);
    cout<<"Using friend function"<<endl;
    if(obj1>obj2){
        cout<<obj1.get_value()<<" is greater than "<<obj2.get_value()<<endl;
    }
    else{
        cout<<obj1.get_value()<<" is smaller than "<<obj2.get_value()<<endl;
    }
    cout<<"Using member function"<<endl;
    if(obj1<obj2){
        cout<<obj2.get_value()<<" is smaller than "<<obj1.get_value()<<endl;
    }
    else{
        cout<<obj2.get_value()<<" is greater than "<<obj1.get_value()<<endl;
    }
}


