#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "account.h"

class SavingsAccount: public Account{
protected:
    double interest;

public:
    
    // constructor
    SavingsAccount();
    SavingsAccount(int accNum, 
        const std::string& name, 
        double bal, 
        int interest);

    // destructor
    ~SavingsAccount();

    // getter and setter
    double getInterest() const;
    void setInterest(double limit);

    // ovr virtual functions
    void deposit(double amount) override;
    void withdraw(double amount) override;
    void display() const override;
};

#endif // SAVINGSACCOUNT_H