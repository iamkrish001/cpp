#include<iostream>
using namespace std;
 
int main(){
    string name, password;
    // char password[100];
    cout<<"Enter User Name : ";
    cin >> name;
    cout<<"Enter Password : ";
    cin >> password;
    
        try{
            if(password.length()<6){
                throw "exception occured";
            }
            cout<<"Valid password"<<endl;
        }
        catch(const char *ch){
            cout<<ch<<endl<<"Password shouldn't be less than 6 digit";
        }
 
    int x, count = 0;
 
    for (int i = 0; i < password.length(); i++){
        x = password[i];
        if(x>=48&&x<=57){
            count = 1;
            break;
        }
    }
    try{
        if(count == 0){
            throw "exception occured";
        }
    }
    catch(const char* ptr){
        cout<<ptr<<endl<<"Password should contain digit";
    } 
}
