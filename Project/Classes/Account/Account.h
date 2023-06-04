#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    int accountNumber;
    int ownerID;
    double balance;

public:
    Account(int accountNumber, int ownerID, double balance);
    int getAccountNumber();
    int getOwnerID();
    double getBalance();
    void setBalance(double balance);
};

#endif
