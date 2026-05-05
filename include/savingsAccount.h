#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "account.h"

class SavingsAccount: public Account{
protected:
    double overdraftLimit;

public:
    
    // constructor
    SavingsAccount();
    SavingsAccount(int accNum, 
        const std::string& name, 
        double bal, 
        const std::string& type);

    // destructor
    ~SavingsAccount();

    // getter and setter
    double getOverdraftLimit() const;
    void setOverdraftLimit(double limit);

    // ovr virtual functions
    void deposit(double amount) override;
    void withdraw(double amount) override;
    void display() const override;
};

#endif; // SAVINGSACCOUNT_H