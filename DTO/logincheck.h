#ifndef LOGINCHECK_H
#define LOGINCHECK_H
#include <SERVICE/encryptiondecryption.h>
#include <QString>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class loginCheck
{
private:
   QString userName,password,checkUsername,checkPassword;
   encryptionDecryption eD;
public:
    loginCheck();
    void setUserName(QString userName);
    QString getUserName();
    void setPassword(QString password);
    bool checkLogin();
};

#endif // LOGINCHECK_H
