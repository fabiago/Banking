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
void CheckingAccount::deposit(double amount) {
    Account::deposit(amount);
}

void CheckingAccount::withdraw(double amount) {
    if (balance - amount >= -overdraftLimit) {
        Account::withdraw(amount);
    } else {
        std::cout << "Overdraft limit exceeded." << std::endl;
    }
}

void CheckingAccount::display() const {
    Account::display();
    std::cout << "Overdraft Limit: " << overdraftLimit << std::endl;
}