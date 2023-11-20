///1
#include <iostream>
using namespace std;
 
class Distance{
    int feet, inch;
    public:
        Distance(){
            feet = 0;
            inch = 0;
        }
        void set_data(){
            cin>>feet>>inch;
        }
        void get_data(){
            cout<<"Feet = "<<feet<<"\nInches = "<<inch<<endl;
        }
        void operator+(Distance &s){
            feet = feet + s.feet;
            inch = inch + s.inch;
        }
};
 
 
 
int main() {
    Distance d1, d2;
    cout<<"Enter the value of feet and inch respectively for 1st obj"<<endl;
    d1.set_data();
    cout<<"Enter the value of feet and inch respectively for 2nd obj"<<endl;
    d2.set_data();
    d1+d2;
    cout<<"Using D1"<<endl;
    d1.get_data();
    cout<<"Using D2"<<endl;
    d2.get_data();
    return 0;
}

