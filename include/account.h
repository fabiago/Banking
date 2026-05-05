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



~Account();
};

#endif // ACCOUNT_H