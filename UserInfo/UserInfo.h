#ifndef USERINFO_H
#define USERINFO_H
// can we use using std::string ;
using std::string ;

#include <string>

class UserInfo {
private:
    string m_name;
    string m_family;
    int m_ID;

public:
    UserInfo(string name, string family, int ID);
    string get_Name() ;
    string get_Family();
    int get_ID();

};

#endif
