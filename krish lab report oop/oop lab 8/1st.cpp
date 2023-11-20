#include<iostream>
#include<fstream>
using namespace std;
 
int main(){
    ofstream apnd("file1.txt", ios::app);
    
    string ch = " New Summit College";
    apnd<<ch;
    cout<<"Data has been appended to file"<<endl;
    return 0;
}