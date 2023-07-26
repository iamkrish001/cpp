
//write a program in c ++ to convert  the USD to NPR or NPR to USD using the concept of
// class and object and also use the switch case.
 
#include<iostream>
using namespace std;
 
class Conversion {
private:
    float value;
 
public:
    void setRs(float a) {
        value = a;
    }
 
    void getRs() {
        cout << "The conversion of " << value << " in USD is " << value / 131.07 << " in Rs" << endl;
    }
 
    void setUsd(float a) {
        value = a;
    }
 
    void getUsd() {
        cout << "The conversion of " << value << " in Rs is " << value * 131.07 << " in USD" << endl;
    }
};
 
int main() {
    float value;
    cout << "Enter the value you want to convert either in USD or NRS: ";
    cin >> value;
 
    int choice;
    cout << "Choose the method of conversion: " << endl;
    cout << "1. USD into NRS" << endl;
    cout << "2. NRS into USD" << endl;
    cin >> choice;
 
    Conversion converter;
 
    switch (choice) {
        case 1:
            converter.setUsd(value);
            converter.getRs();
            break;
 
        case 2:
            converter.setRs(value);
            converter.getUsd();
            break;
 
        default:
            cout << "You entered an invalid choice. Try again." << endl;
            break;
    }
 
    return 0;
}