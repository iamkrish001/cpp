#include<iostream>
using namespace std;
 
int main(){
    string email;
    int i, find_ad = 0;
    cout<<"Enter Email Id: ";
    cin >> email;
 
    for (i = 0; i < email.length(); i++)
    {
        if(email[i]=='@'){
            find_ad = 1;
        }2
    }
    try{
        if(find_ad == 0){
            throw "exception caught...";
        }
        cout<<"Email is valid."<<endl;
    }catch(const char *ch){
        cout<<ch<<endl<<"Invalid Email Id!!!";
    }
    return 0;
}