#include<iostream>
#include<fstream>
 
using namespace std;
 
int main(){
 
    int count_space=0, count_other=0;
    ifstream in("file1.txt");
    if(!in.is_open()){
        cout<<"File doesn't exist..!!"<<endl;
        exit (0);
    }
    char ch;
    while (in.get(ch))
    {
        if(ch==32){
            count_space ++;
        }else{
            count_other ++;
        }
    }
 
    cout<<"No. of Characters in a file is "<<count_other+count_space<<endl;
    cout<<"Space between the words : "<<count_space<<endl;
}