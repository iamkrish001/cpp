//3
#include<iostream>
using namespace std;
 
class Xyz;
 
class Abc{
    int x, y;
    public:
        Abc(int a, int b){
            x=a;
            y=b;
        }
        void get_values(){
            cout<<"x = "<<x<<"\ny = "<<y<<endl;
        }
        friend void common_friend(Abc &s1, Xyz &s2);
 
};
class Xyz{
    int a, b;
    public:
        Xyz(int x, int y){
            a = x;
            b = y;
        }
        void get_values(){
            cout<<"a = "<<a<<"\nb = "<<b<<endl;
        }
        friend void common_friend(Abc &s1, Xyz &s2);
};
 
void common_friend(Abc &s1, Xyz &s2){
    int p, q;
    p = s1.x;
    s1.x = s2.a;
    s2.a = p;
 
    q = s1.y;
    s1.y = s2.b;
    s2.b = q;
}
 
int main(){
    Abc A1(5, 9);
    Xyz X1(6, 8);
    cout<<"Before using common friend"<<endl;
    A1.get_values();
    X1.get_values();
    cout<<"After using common friend"<<endl;
    common_friend(A1, X1);
    A1.get_values();
    X1.get_values();
 
    return 0;
}

