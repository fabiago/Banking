#include "savingsAccount.h"

SavingsAccount::SavingsAccount(int accNum,
    const std::string& name,
    double bal,
    int interest)
    : Account(accNum, name, bal, "Savings"), interest(interest) {}

SavingsAccount::~SavingsAccount() {}

// getter and setter
double SavingsAccount::getInterest() const {
    return interest;
}

void SavingsAccount::setInterest(double limit) {
    interest = limit;
}

// ovr virtual functions
void SavingsAccount::deposit(double amount) {}
void SavingsAccount::withdraw(double amount) {}
void SavingsAccount::display() const {}
