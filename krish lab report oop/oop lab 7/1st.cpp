#include<iostream>
using namespace std;
 
int main(){
    int a = 1, b = 0, c;
    try{
        if(b==0){
            throw "exception occured";
        }
        c = a/b;
    }catch(const char *e){
        cout<<e<<endl<<"Integer exception";
    }
}