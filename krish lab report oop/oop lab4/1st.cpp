
#include<iostream>
using namespace std;
 
class Base{
    public:
        int x, y;
        Base(){
            cout<<"Enter any two number: "<<endl;
            cin>>x>>y;
        }
};
 
class Derived: public Base{
    public:
        void get_data(){
            cout<<"The sum of two number you entered is "<<x+y<<endl;
        }
};
 
int main(){
    Derived d1;
    d1.get_data();
}

