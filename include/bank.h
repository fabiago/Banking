#ifndef BANK_H
#define BANK_H

#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include "account.h"
#include <map>

class Bank{
private:

    // private memeber functions
    void createCheckingAccount(int accNum, 
        const std::string& name, 
        double bal, 
        double overdraft);
    
    void createSavingsAccount(int accNum, 
        const std::string& name, 
        double bal, 
        int interest);
    
    void deleteAccount(int accNum, std::string& name);

    void findAccount(int accNum, std::string& name);

    void transferFunds(int accNum, std::string& name, double bal);

    // private member variables
    int m_nextAccountNumber = 0;
    std::map<int, std::unique_ptr<Account>> m_accounts;

public:
    Bank();
    ~Bank();
};

#endif