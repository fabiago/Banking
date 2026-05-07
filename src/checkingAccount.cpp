#include "checkingAccount.h"
#include <iostream>

CheckingAccount::CheckingAccount(int accNum, 
        const std::string& name, 
        double bal, 
        double overdraft)
        : Account(accNum, name, bal, "Checking"), overdraftLimit(overdraft)          {};
CheckingAccount::~CheckingAccount(){};

// getter and setter
double CheckingAccount::getOverdraftLimit() const {
    return overdraftLimit;
};

void CheckingAccount::setOverdraftLimit(double limit) {
    overdraftLimit = limit;
};

 // ovr virtual functions
void deposit(double amount) {};
void withdraw(double amount) {};
void display() {};