#include "Employee.h"

Employee::Employee(std::string name, std::string family, int ID, double salary)
    : name(name), family(family), ID(ID), salary(salary) {}

std::string Employee::getName() {
    return name;
}

std::string Employee::getFamily() {
    return family;
}

int Employee::getID() {
    return ID;
}

double Employee::getSalary() {
    return salary;
}

void Employee::setSalary(double salary) {
    this->salary = salary;
}
