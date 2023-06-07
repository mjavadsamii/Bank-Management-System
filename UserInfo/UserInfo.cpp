#include "UserInfo.h"
using std::string;
UserInfo::UserInfo(string name, string family, int ID)
    : m_name(name), m_family(family), m_ID(ID) {}

string UserInfo::get_Name() {
    return m_name;
}
