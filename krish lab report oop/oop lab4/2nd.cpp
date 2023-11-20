//2
#include<iostream>
using namespace std;
 
class Base{
    public:
    int x, y, z;
        void get_marks(){
            cout<<"Enter the marks of three subjects: "<<endl;
            cin>>x>>y>>z;
        }
};
class Derived1: public Base{
    public:
        int sum;
        void get_sum(){
            sum = x+y+z;
        }
};
class Derived2: public Derived1{
    public:
        float ave;
        void get_percent(){
            ave = (float)sum/180*100;
            cout<<"Percentage obtained by the student is "<<ave<<endl;
        }
};
 
int main(){
 
    int no_of_student;
    cout<<"Enter total no of student: "<<endl;
    cin>>no_of_student;
 
    Derived2 *obj = new Derived2[no_of_student];
    for(int i = 0; i<no_of_student; i++){
        cout<<"For student "<<i+1<<endl;
        obj->get_marks();
        obj->get_sum();
        obj->get_percent();
    }
}

