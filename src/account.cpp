#include "account.h"

Account::Account() {};

// getter functions
int getAccountNumer();
std::string getOwnerName() ;
double getBalance() ;
std::string getAccountType() ;

// setter functions
void setOwnerName(const std::string& name);
void setBalance(double bal);


// implement virtual functions
void deposit(double amount) {};
void withdraw(double amount) {};
void display() {};

// destructor
Account::~Account() {};

