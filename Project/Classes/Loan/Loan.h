#ifndef LOAN_H
#define LOAN_H

class Loan {
private:
    int loanID;
    int customerID;
    double amount;

public:
    Loan(int loanID, int customerID, double amount);
    int getLoanID();
    int getCustomerID();
    double getAmount();
    void setAmount(double amount);
};

#endif  // LOAN_H
