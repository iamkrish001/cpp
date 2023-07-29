 //  8.	Define a class to represent a bank account. Include the following members:
 
#include<iostream>
using namespace std;
 
class Bank{
private:
string ac_name;
string ac_number;
string ac_type;
double ac_balance;
 
public:
 void setvalues(string aname,string anumber,string atype,double abalance){
 
    ac_name=aname;
    ac_number=anumber;
    ac_type=atype;
    ac_balance=abalance;
 
 }
 
 void depositAmount(){
    double amount;
    cout<<"Enter an amount to deposit:"<< endl;
    cin>>amount;
    ac_balance=ac_balance + amount;
    cout<<"Amount after deposit:"<<ac_balance<<endl;
 
 
 }
 
 void withdraw(){
 
    double amount;
    cout<<"Enter an amount to withdraw:"<<endl;
    cin>>amount;
 
    if(ac_balance<amount){
        cout<<"Insufficient fund."<<endl;
 
    }else{
        ac_balance=ac_balance-amount;
        cout<<"Amount after withdrawing:"<<ac_balance<<endl;
 
    }
 }
 
   void displayAccountDetails(){
    cout<<"Account name:"<<ac_name<<endl;
    cout<<"Account balance:"<<ac_balance<<endl;
 
 
   }
};
  int main(){
    Bank Krish;
    Krish.setvalues("Krish","U10701000","Savings",100);
    Krish.depositAmount();
    Krish.withdraw();
    Krish.displayAccountDetails();
 
  }