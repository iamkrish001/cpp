// program to append sth in newfile.txt
#include<iostream>
#include<fstream>
using namespace std ; 

int main (){
    char arr[100] ; 
    cout << " Add sth to your file : "<< endl ; 
    cin.getline(arr,100) ; 
    ofstream myfile("newfile.txt", ios::app) ; 
    myfile<< arr ; 
    myfile.close();

    // to read
    ifstream mynewfile("newfile.txt"); 
    mynewfile.getline(arr, 100) ; 
    cout << " the contents of file are : " << arr << endl ; 
    mynewfile.close(); 
}