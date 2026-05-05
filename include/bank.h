#ifndef BANK_H
#define BANK_H

#include <vector>
#include <string>
#include <iostream>

class Bank{
private:
    std::vector<std::string> allAccounts;
    void createAccount();
    void deleteAccount();
    void findAccount();
    void transferFunds();

public:
    Bank();
    ~Bank();
};

#endif;