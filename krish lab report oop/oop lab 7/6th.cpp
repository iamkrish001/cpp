#include<iostream>
using namespace std;
 
int main(){
    string integer_intput;
    int loop_exit = 0, ascii_for_integer;
    while(!loop_exit){
        int check_other = 0;
        cout<<"Enter valid numeric value: ";
        cin>>integer_intput;
 
        for(int i=0; i<integer_intput.length();i++){
 
            ascii_for_integer = integer_intput[i];
 
            if(ascii_for_integer>=48&&ascii_for_integer<=57){
                continue;
            }else{
                check_other = 1;
                break;
            }
        }
        try{
            if(check_other == 1){
                throw "Integer shouldn't contain letters or any other special character, try again!!!";
            }
            cout<<"You entered "<<integer_intput;
            loop_exit = 1;
        }
        catch(const char *str){
            cout<<str<<endl;
        }
    }
}