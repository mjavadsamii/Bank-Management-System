#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

class Transaction {
private:
    int transactionID;
    int accountNumber;
    std::string date;
    double amount;

public:
    Transaction(int transactionID, int accountNumber, std::string date, double amount);
    int getTransactionID();
    int getAccountNumber();
    std::string getDate();
    double getAmount();
    void setAmount(double amount);
};

#endif
