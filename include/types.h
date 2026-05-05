#include <string>

struct Accout
{
    /* data */
    int act_number;
    std::string name;
    int balance;
    std::string act_type; // checking, savings, etc
};

struct Transactions
{
    /* data */
    std::string type; // deposit, withdraw, transfer, etc...
    int amount;
    int timestamp;
};

