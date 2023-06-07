#include "UserAccount.h"
UserAccount::UserAccount ( string UserName , string Password): uac_UserName(UserName), uac_Password(Password)
{
            string TempUserName = '"'+UserName+'"';
            // insert if condition to get All accounts file in the smae directory 
            //if its null
            if ( uac_AllAccounts.is_null() == true)
            {
                fstream AllAccountsFILE("./AllAccountsFILE.JSON");
                uac_AllAccounts = json::parse(AllAccountsFILE);
            }
            string HashedPassword = UserAccount::Hashing(Password);
            uac_AllAccounts[TempUserName]= HashedPassword;

            cout<<"Your User account was created \n";
            cout<<"Your user name is : " << uac_UserName <<'\n';
            cout<<"Your password is :" <<uac_Password<<'\n';
        

}
bool UserAccount::Login(const string & UserName, const string &Password )
{
    string HashedPassword = UserAccount::Hashing(Password);
    string TempUserName = '"'+UserName+'"';

    for ( auto iteratorFile = uac_AllAccounts.begin() , iteratorFile != m_AllAccounts.end() , i++)
    {

        if ( uac_AllAccounts.contains(TempUserName))
        {
            if ( HashedPassword == uac_AllAccounts[TempUserName]["Password"])
            {
                //somthings must be here 
                cout<<"You logined \n";
                return true ;
            }
            else 
            {
                cout<<"Your password is wrong pleas try again \n" ;
                return false;
            }
        
        }
    }   
    cout<<"Your UserName not found please sign in or Enter correct UserName \n";
    return false;
}
bool UserAccount::Logout()
{
    //somthings must be here 
}
