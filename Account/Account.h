#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
// we must do somthing with this to verfiy login with class login
    bool ac_Login_State {false};
    // please write code in specific desing 
    // insert First and second letters of Each word of class name befor memebers
    int ac_accountNumber;
    int ac_ownerID;
    double ac_balance;

public:
    Account(int accountNumber, int ownerID, double balance);
    int getAccountNumber();
    int getOwnerID();
    double getBalance();
    void setBalance(double balance);
};

#endif
