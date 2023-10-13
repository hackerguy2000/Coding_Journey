#include<bits/stdc++.h>
using namespace std;
static const string salting_first="higher123";
static const string salting_last="lower123";
class User{

private:
int userid;
string password;

public:
void user_id_setters(int uid)
{
  userid=uid;
}
void password_setters(string pass)
{
    password=salting_first+pass+salting_last;
}
int user_id_getters()
{
    return userid;
}
string password_getters()
{
    return password;
}

};

int main()
{
    User u1,u2;
   // obj.userid=130051;//this is wrong coz I can not access the private member outside the class
// the user id and password is intentional made private member so unauthorized people cannot modify or initialize the values of id and password
    u1.user_id_setters(1300);
    u1.password_setters("shawrahul");//here main user enters the password but they are unknown of the technique that have been used how a password gets stored in the program as demonstrated above
    cout<<u1.user_id_getters()<<endl;
    cout<<u1.password_getters()<<endl;
    return 0;
}