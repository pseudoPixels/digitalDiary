#include "logincheck.h"

loginCheck::loginCheck()
{
}

void loginCheck::setUserName(QString userName)
{
    this->checkUsername=userName;
    this->userName=userName;
}

void loginCheck::setPassword(QString password)
{
    this->password=password;
}

bool loginCheck::checkLogin()
{
    string str;
    char user[50],pass[50];
    int flag=0;
    QString Qpass,Quser;
    ifstream fin("Login.txt");
    while(!fin.eof())
    {
        fin.getline(user,50);
        fin.getline(pass,50);

        Quser=(QString)user;
        Qpass=(QString)pass;
        Quser = eD.decryptIt(Quser);
        Qpass= eD.decryptIt(Qpass);


        if(Quser==this->userName && Qpass==this->password){
            flag=1;


        }


    }
    fin.close();
    if(flag==0)return false;
    else if(flag==1)return true;

}

QString loginCheck::getUserName()
{
    return this->checkUsername;
}
