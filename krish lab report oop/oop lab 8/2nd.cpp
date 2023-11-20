#include<iostream>
#include<fstream>
using namespace std;
 
int main(){
    char file1[50], file2[50], file3[50];
    cout<<"Enter First File Name with Extension '.txt' : ";
    cin>>file1;
    cout<<"Enter Second File Name with Extension '.txt' : ";
    cin>>file2;
    cout<<"Enter Third File Name with Extension '.txt' (which will store the contents of First and Second file) : ";
    cin>>file3;
 
    ifstream in1(file1), in2(file2);
    ofstream out(file3);
    if(!in1.is_open()&&in2.is_open()){
        cout<<"File doesn't exits..."<<endl;
        exit (0);
    }
 
    string read;
 
    while (getline(in1, read))
    {
        out<<read<<endl;
    }
    in1.close();
 
    while (getline(in2, read))
    {
        out<<read<<endl;
    }
    in2.close();
    out.close();
 
    cout<<"Two File have been Merged into file3.txt File Successfully...!!!"<<endl;
        
}