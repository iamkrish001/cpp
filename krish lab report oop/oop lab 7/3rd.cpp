#include<iostream>
using namespace std;
 
int main(){
    int x, y;
    float z;
    char ch;
    cout<<"Enter any two number of arithmetic operation: "<<endl;
    cin>>x>>y;
 
    cout<<"Enter the arithmetic operation you want to perform: "<<endl;
    cout<<"/\n*\n-\n+\n"<<endl;
    cin>>ch;
 
    switch(ch){
        case '/': {
            try{
                if(y == 0){
                    throw "exception occured";
                }
                z = (float)x/y;
                cout<<"Division of "<<x<<" and "<<y<<" is "<< z <<endl;
            }catch(const char *ch){
                cout<<ch<<endl<<"dividend shouldnot be zero";
            }
            break;
        }
        case '*': cout<<"Multiplication of "<<x<<" and "<<y<<" is "<< x*y <<endl;
        break;
        case '-': cout<<"Subtraction of "<<x<<" and "<<y<<" is "<<x-y<<endl;
        break;
        case '+': cout<<"Addition of "<<x<<" and "<<y<<" is "<<x+y<<endl;
        break;
        default: {
            try{
                throw "exception occured";
            }catch(const char *str){
                cout<<str<<endl<<"doesn't contain operator"<<endl;
            }
        }
    }
    return 0;
}