#ifndef USERNAMEDTO_H
#define USERNAMEDTO_H
#include <QString>
#include <iostream>
#include <fstream>
#include <QMessageBox>
#include <SERVICE/encryptiondecryption.h>
using namespace std;

class userNameDto
{
private:
    QString userName,password;
    encryptionDecryption enc;
    QString tempUserName;
public:
    userNameDto();
    void setUserName(QString userName);
    void setPassword(QString password);
    QString getUserName();
    QString getPassword();
    void diskIn();

};

#endif // USERNAMEDTO_H
