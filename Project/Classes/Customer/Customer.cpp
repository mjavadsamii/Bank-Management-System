#include "Customer.h"

Customer::Customer(std::string name, std::string family, int ID, std::string address)
    : name(name), family(family), ID(ID), address(address) {}

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
