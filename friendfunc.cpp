#include <iostream>
using namespace std ; 
class Student{

private :
void friend Name(Student s) ; // declaration of friend function
string name ; 
string nick_name ; 
public :
void getName(string n, string nn){
name = n ;
nick_name = nn ; 
}
} ;

Name(Student s){
cout<< "Name=" << s.name << "NickName=" << s.nick_name ; 
}
int main(){
    Student s("Krish", "Hero"); 

}