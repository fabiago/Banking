#include "bank.h"
#include <iostream>
#include "savingsAccount.h"

Bank::Bank(){}

void Bank::createSavingsAccount(int accNum, 
        const std::string& name, 
        double bal, 
        int interest){
          
          // fill map
          int num = m_nextAccountNumber++; // num gets old val and m_nextAccountNumber is incremented
          m_accounts[num] = std::make_unique<SavingsAccount>(accNum, name, bal, interest);
        };

void Bank::createCheckingAccount(int accNum, 
        const std::string& name, 
        double bal, 
        double overdraft) {

        }

void deleteAccount(int accNum, std::string& name) {};

void findAccount(int accNum, std::string& name) {};

void transferFunds(int accNum, std::string& name, double bal);

Bank::~Bank(){};


