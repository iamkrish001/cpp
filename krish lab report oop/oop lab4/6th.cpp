 
#include<iostream>
using namespace std;
 
class Bank_acc{
 
    private:
    string ac_name;
    string ac_number;
    string ac_type;
    double ac_balance;
 
    public:
    void setProperties(string aname, string a_number, string atype, double a_balance){
        ac_name=aname;
        ac_number=a_number;
        ac_type=atype;
        ac_balance=a_balance;
    }
 
    void depositbalance(){
        double balance;
        cout<<"Enter the balance you want to deposit: ";
        cin>>balance;
 
        ac_balance=ac_balance+balance;
        cout<<"Your balance now is "<<ac_balance<<endl;
    }
 
    void withdrawBalance(){
        double balance;
        cout<<"Your current balance is "<<ac_balance<<endl;
        cout<<"Enter the balance you want to withdraw: \n";
        cin>>balance;
        if(ac_balance<balance){
            while (balance>ac_balance)
            {
                cout<<"Insufficient balance to withdraw!\n";
                cin>>balance;
            }
            
        }
        else{
            ac_balance=ac_balance-balance;
            cout<<"\nYour remaining balance is "<<ac_balance;
        }
    }
 
    void balanceDetails(){
        cout<<"\nName : "<<ac_name<<endl;
        cout<<"Account_no : "<<ac_number<<endl;
        cout<<"Type : "<<ac_type<<endl;
        cout<<"Balance : "<<ac_balance<<endl;
    }
 
};
 
int main(){
    Bank_acc ram;
    ram.setProperties("Kris", "4913F9D9827", "Topup fixed deposit Account", 5000);
    ram.depositbalance();
    ram.withdrawBalance();
    ram.balanceDetails();
}


