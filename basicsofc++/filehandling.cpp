// ofstream is a data type that represents the output file stream and used to write info in a file
// ifstream is a data type => input file stream and reads info from a file
// fstream is data type => performs both operation of ofstream and ifstream
// Wap to write sth in a file and save it

#include<iostream>
#include<fstream>
using namespace std ;

int main(){
  // for writing 
    char arr[100] ; 
    cout << " Enter something :" << endl ; 
    cin.getline(arr, 100); 
    ofstream myfile("newfile.txt") ;
    myfile<<arr ;
    myfile.close(); 
// for reading 
char arr1[100] ; 
cout << " Reading the contents of newfile.txt" << endl ;
ifstream filetoread("newfile.txt"); 
filetoread.getline(arr1, 100) ; 
//display the characters
cout << " The contents are "<< arr1 << endl ;
filetoread.close() ; 
}