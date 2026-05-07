#include "checkingAccount.h"
#include <iostream>

CheckingAccount::CheckingAccount(){};
CheckingAccount::~CheckingAccount(){};

// getter and setter
double getOverdraftLimit() {};
void setOverdraftLimit(double limit) {};

 // ovr virtual functions
void deposit(double amount) {};
void withdraw(double amount) {};
void display() {};