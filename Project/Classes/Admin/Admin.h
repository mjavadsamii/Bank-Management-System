#ifndef ADMIN_H
#define ADMIN_H

#include"../UserInfo/UserInfo.h"

using namespace std;

class Admin : public UserInfo
{
private:
    string adminRole;

public:
    Admin(string name, string family, int ID, string role);

    string getRole() const;
};

#endif
