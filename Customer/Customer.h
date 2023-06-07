#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "UserInfo.h"
#include "Admin.h"
using std::vector ;

class Customer : public UserInfo
{
    // like this
    friend void addCustomer(const Customer& customer);
    friend void removeCustomer(const Customer& customer);
    friend void updateCustomer(const Customer& customer);

private:
    // we insert a pointer of each obj when created in constructor in this vecotr
    // I should say this is not my purpose
    // because we must store them in file
    // and store customer pointer to each obj in this vector
    // and friend admin methodes
    static vector<Customer *> m_All_Customres ;

public:
    Customer(std::string name, std::string family, int ID, std::string address);
    std::string getName();
    std::string getFamily();
    int getID();
    std::string getAddress();
    void setAddress(std::string address);
};

#endif
