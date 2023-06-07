#include "Transaction.h"

Transaction::Transaction(int transactionID, int accountNumber, std::string date, double amount)
    : transactionID(transactionID), accountNumber(accountNumber), date(date), amount(amount) {}

int Transaction::getTransactionID() {
    return transactionID;
}

int Transaction::getAccountNumber() {
    return accountNumber;
}

std::string Transaction::getDate() {
    return date;
}

double Transaction::getAmount() {
    return amount;
}

void Transaction::setAmount(double amount) {
    this->amount = amount;
}
