#include "bank.h"
#include <iostream>
#include "savingsAccount.h"
#include "account.h"

Bank::Bank(){}

void createAccount(){
    // Account* acc = new SavingsAccount();
    std::unique_ptr<Account> acc = std::make_unique<Account>(SavingsAccount());
    // Bank::allAccounts[1] = acc;
};