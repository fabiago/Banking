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
    void createAccount();
    void deleteAccount();
    void findAccount();
    
    

    void transferFunds();

public:
    Bank();
    ~Bank();

    // public member vars
    std::map<int, Account*> allAccounts;
};

#endif;