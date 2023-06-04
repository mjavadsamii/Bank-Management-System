#include "UserInfo.h"

UserInfo::UserInfo(std::string name, std::string family, int ID)
    : name(name), family(family), ID(ID) {}

std::string UserInfo::getName() {
    return name;
}
