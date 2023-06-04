#ifndef USERINFO_H
#define USERINFO_H

#include <string>

using namespace std;

class UserInfo
{
private:
    string name;
    string family;
    int ID;

public:
    UserInfo(string name, string family, int ID) : name(name), family(family), ID(ID){};
    string getname() {return name;}
};

#endif

