#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

class Account {
protected:
    int accountNumber;
    std::string ownerName;
    double balance;
    std::string accountType;

public:

    // constructors
    Account();
    Account(int accNum, 
        const std::string& name, 
        double bal, 
        const std::string& type);

    // vitual destructor
    virtual ~Account(); // since Account() has virtual functins, the destructor must be virtual as well

    // getter functions
    int getAccountNumer() const;
    std::string getOwnerName() const;
    double getBalance() const;
    std::string getAccountType() const;

    // setter functions
    void setOwnerName(const std::string& name);
    void setBalance(double bal);

    // virtual functions
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual void display() const = 0;
};

#endif // ACCOUNT_H