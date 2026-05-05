#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <map>

class Transaction{
private:
    std::map<std::string, std::string> log;

public:
    Transaction();
    ~Transaction();
};

#endif;