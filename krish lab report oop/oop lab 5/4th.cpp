#include <iostream>

using namespace std;

class Account {
protected:
    double balance;

public:
    Account(double initialBalance) : balance(initialBalance) {}

    virtual void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << " into the account." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    virtual void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            cout << "Withdrawn $" << amount << " from the account." << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    virtual void calculateInterest() {
        // Base class does not provide interest calculation
    }

    double getBalance() const {
        return balance;
    }
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(double initialBalance, double rate) : Account(initialBalance), interestRate(rate) {}

    void calculateInterest() override {
        double interest = balance * interestRate;
        balance += interest;
        cout << "Interest added: $" << interest << endl;
    }
};

class CheckingAccount : public Account {
public:
    CheckingAccount(double initialBalance) : Account(initialBalance) {}
};

int main() {
    SavingsAccount savings(1000.0, 0.05);
    CheckingAccount checking(500.0);

    savings.deposit(200.0);
    checking.deposit(100.0);

    savings.calculateInterest();
    checking.withdraw(50.0);

    cout << "Savings Account Balance: $" << savings.getBalance() << endl;
    cout << "Checking Account Balance: $" << checking.getBalance() << endl;

    return 0;
}