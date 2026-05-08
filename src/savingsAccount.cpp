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
void SavingsAccount::deposit(double amount) {
    Account::deposit(amount);
    // perhaps add interest calculation, but for now simple
}

void SavingsAccount::withdraw(double amount) {
    Account::withdraw(amount);
}

void SavingsAccount::display() const {
    Account::display();
    std::cout << "Interest Rate: " << interest << "%" << std::endl;
}
