#include<iostream>
#include<fstream>
using namespace std;
 
int main(){
    ifstream in("input.txt");
    string str;
    try{
        if(!in.is_open()){
            throw "exception occured";
        }
        while (in.eof())
        {
            getline(in, str);
        }
        in.close();
    }catch(const char *ch){
        cout<<ch<<endl<<"File doesn't exist";
    }
 
}