#include "Account.h"

Account::Account(int accountNumber, int ownerID, double balance)
    : accountNumber(accountNumber), ownerID(ownerID), balance(balance) {}

int Account::getAccountNumber() {
    return accountNumber;
}

int Account::getOwnerID() {
    return ownerID;
}

double Account::getBalance() {
    return balance;
}

void Account::setBalance(double balance) {
    this->balance = balance;
}
