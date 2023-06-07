#include "Customer.h"
// and change this to inherited form
Customer::Customer(std::string name, std::string family, int ID, std::string address)
    :UserInfo::UserInfo(name , family , ID)
    {
        m_All_Customres.push (this);
    }

std::string Customer::getName() {
    return name;
}

std::string Customer::getFamily() {
    return family;
}

int Customer::getID() {
    return ID;
}

std::string Customer::getAddress() {
    return address;
}

void Customer::setAddress(std::string address) {
    this->address = address;
}
