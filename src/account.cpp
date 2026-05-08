#include "account.h"

Account::Account() : accountNumber(0), ownerName(""), balance(0.0), accountType("") {}

Account::Account(int accNum, 
    const std::string& name, 
    double bal, 
    const std::string& type) : accountNumber(accNum), ownerName(name), balance(bal), accountType(type) {}

// getter functions
int Account::getAccountNumer() const {
    return accountNumber;
}

std::string Account::getOwnerName() const {
    return ownerName;
}

double Account::getBalance() const {
    return balance;
}

std::string Account::getAccountType() const {
    return accountType;
}

// setter functions
void Account::setOwnerName(const std::string& name) {
    ownerName = name;
}

void Account::setBalance(double bal) {
    balance = bal;
}

// implement virtual functions
void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
    }
}

void Account::display() const {
    std::cout << "Account Number: " << accountNumber << std::endl;
    std::cout << "Owner Name: " << ownerName << std::endl;
    std::cout << "Balance: " << balance << std::endl;
    std::cout << "Account Type: " << accountType << std::endl;
}

// destructor
Account::~Account() {}

