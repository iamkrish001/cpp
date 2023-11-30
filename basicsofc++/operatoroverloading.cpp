//wap to add total no of boys and girls of two sections of science faculty
#include<iostream>
using namespace std ;

class Science{
public :
int boys, girls;

Science(){  //default constructor
    boys = 0 ;
    girls = 0 ; 
}
Science(int b, int g){      // parameterized constructor
    boys = b;
    girls = g ;
}
void displayinfo(){
    cout << "The no of boys and girls of 2 sections are :" << boys <<" and "<< girls << endl ; 
}

// defining opearator
Science operator+(Science obj){              // instant object for passing    
    Science temp ;      // temporary obj of science
    temp.boys= boys + obj.boys; 
    temp.girls = girls + obj.girls ; 
    return temp ; 

}
};

int main (){
    Science sec1(30,20);
    Science sec2(30,20);
    Science sec3(40,60) ; 
    Science total; 
    total = sec1 + sec2 + sec3  ; 
    total.displayinfo(); 
}