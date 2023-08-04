#include<iostream>
using namespace std ; 
class Employee{
    public :
int id ; 
string name; 
//setter method for id
Employee(int emp_id) {   // intializing the constructor for id
    id = emp_id ; 
}
// getter method for id
int getId(){
    return id; 
}
//setter method for name
Employee (string name){  // intializing the constructor for name
    emp_name = name ; 
}
// getter method for name
string getName(){
    return name ; 
}
};

class PartimeEmp : public Employee{
  private:
float dailywage ; 

v
};
class FulltimeEmp : public Employee{

    private :
    float salary; 
};


int main(){
    Employee(100) ; 
// PartimeEmp emp1(1000) ;
// FulltimeEmp emp2(30000) ; 
cout << "the id is " << getId() ; 
}