class UserInfo
{
private:
    string m_Name {};
    string m_Family {};
    int m_ID{};
public :
    UserInfo(string Name , string Family , int ID):m_Name(Name), m_Family(Family), m_ID(ID){};

};
