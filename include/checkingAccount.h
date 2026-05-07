#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "account.h"

class CheckingAccount: public Account{
private:
    double overdraftLimit;

public:
    
    // constructors
    CheckingAccount();
    CheckingAccount(int accNum, 
        const std::string& name, 
        double bal, 
        double overdraft);

    // destructor
    ~CheckingAccount();

    // TODO these could be inlined
    // getter and setter
    double getOverdraftLimit() const;
    void setOverdraftLimit(double limit);

    // ovr virtual functions
    void deposit(double amount) override;
    void withdraw(double amount) override;
    void display() const override;
};
#endif