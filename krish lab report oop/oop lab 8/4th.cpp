#include<iostream>
#include<fstream>
using namespace std;
 
int main(){
    ifstream in("File1.txt");
    if(!in.is_open()){
        cout<<"File not found!!!"<<endl;
        exit (0);
    }
 
    ofstream out("file3.txt");
    char ch;
    while (in.get(ch))
    {
        if(ch>=97&&ch<=122){
            ch-=32;
            out<<ch;
        }else{
            out<<ch;
        }
    }
 
    cout<<"Characters are converted successfully..."<<endl;
    
}