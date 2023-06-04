#ifndef ADMIN_H
#define ADMIN_H

#include <vector>
#include "Employee.h"
#include "Customer.h"
#include "Account.h"
#include "Loan.h"
#include "Transaction.h"
#include "UserInfo.h"

class Admin : public UserInfo {
private:
    std::vector<Employee> employees;
    std::vector<Customer> customers;
    std::vector<Account> accounts;
    std::vector<Loan> loans;
    std::vector<Transaction> transactions;

public:
    // Constructors
    Admin(std::string name, std::string family, int ID);

    // Employee management
    void addEmployee(const Employee& employee);
    void removeEmployee(const Employee& employee);
    void updateEmployee(const Employee& employee);

    // Customer management
    void addCustomer(const Customer& customer);
    void removeCustomer(const Customer& customer);
    void updateCustomer(const Customer& customer);

    // Account management
    void addAccount(const Account& account);
    void removeAccount(const Account& account);
    void updateAccount(const Account& account);

    // Loan management
    void addLoan(const Loan& loan);
    void removeLoan(const Loan& loan);
    void updateLoan(const Loan& loan);

    // Transaction management
    void addTransaction(const Transaction& transaction);
    void updateTransaction(const Transaction& transaction);

    // Search functions
    void searchEmployees();
    void searchCustomers();
    void searchTransactions();
    void searchLoans();

    // Other functions
    void displayMenu();
};

#endif
