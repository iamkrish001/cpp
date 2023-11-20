#include<iostream>
using namespace std;
 
class shape{
    public:
        myshape(){}
};
class opened_shape : public shape{
    public:
        void intro(){
            cout<<"Opened shape"<<endl;
        }
};
class closed_shape: public shape{
    public:
        void intro(){
            cout<<"closed shape"<<endl;
        }
};
class circle: public opened_shape, closed_shape{
    public:
};
 
int main(){
    circle c1;
        c1.intro();
}

