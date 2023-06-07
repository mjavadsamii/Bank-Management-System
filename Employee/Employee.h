#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
private:
    std::string name;
    std::string family;
    int ID;
    double salary;

public:
    Employee(std::string name, std::string family, int ID, double salary);
    std::string getName();
    std::string getFamily();
    int getID();
    double getSalary();
    void setSalary(double salary);
};

#endif 
