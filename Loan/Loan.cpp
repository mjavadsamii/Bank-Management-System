#include "Loan.h"

Loan::Loan(int loanID, int customerID, double amount)
    : loanID(loanID), customerID(customerID), amount(amount) {}

int Loan::getLoanID() {
    return loanID;
}

int Loan::getCustomerID() {
    return customerID;
}

double Loan::getAmount() {
    return amount;
}

void Loan::setAmount(double amount) {
    this->amount = amount;
}
