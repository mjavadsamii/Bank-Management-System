#ifndef USERINFO_H
#define USERINFO_H

#include <string>

class UserInfo {
private:
    std::string name;
    std::string family;
    int ID;

public:
    UserInfo(std::string name, std::string family, int ID);
    std::string getName();
};

#endif
