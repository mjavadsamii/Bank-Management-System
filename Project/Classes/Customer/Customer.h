#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
private:
    std::string name;
    std::string family;
    int ID;
    std::string address;

public:
    Customer(std::string name, std::string family, int ID, std::string address);
    std::string getName();
    std::string getFamily();
    int getID();
    std::string getAddress();
    void setAddress(std::string address);
};

#endif
