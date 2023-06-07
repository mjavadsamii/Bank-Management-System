#ifndef USERACCOUNT_H
#define USERACCOUNT_H
#include <string>
#include <iostream>
#include <fstream>
#include "nlohmann/single_include/nlohmann/json.hpp"
using std::string;
using std::cout;
using std::fstream;
using json = nlohmann::json;
class UserAccount 
{
    private:
        string uac_UserName{};
        string uac_Password {};
        static json uac_AllAccounts ;
    public :
        UserAccount ( string UserName , string Password): uac_UserName(UserName), uac_Password(Password){}
    bool Login(const string & UserName, const string & Password );
    bool Logout() ;
    string Hashing ( const string & Password);        
        
}


#endif