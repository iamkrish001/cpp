#include<iostream>
#include<fstream>
 
using namespace std;
 
int main(){
    int count_words = 0, count_char = 0, count_line=0;
 
    ifstream in1("file1.txt");
    ifstream in2("file1.txt");
    if(!in1.is_open()||!in2.is_open()){
        cout<<"File doesn't exist..."<<endl;
        exit (0);
    }
 
    char ch;
    string str;
    while (in2>>str){
        if(str[0]!=EOF){
            count_words++;
        }
    }
 
    while (in1.get(ch))
    {
        if(ch=='\n'){
            count_line ++;
        }else{
            count_char ++;
        }
    }
    cout<<"Total NO. of Characters : "<<count_char<<endl;
    cout<<"Total NO. of Words : "<<count_words<<endl;
    cout<<"Total NO. of Lines : "<<count_line+1<<endl;
    
}