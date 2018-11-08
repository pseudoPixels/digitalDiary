#ifndef ADDNEW__PMANAGER_H
#define ADDNEW__PMANAGER_H
#include <QString>
#include <fstream>
#include <iostream>
#include <login.h>

using namespace std;


class addNew__pManager
{
private:
    QString nWeb,nUser,nPass;
    string nW,nU,nP;
    char fileName[50];
public:
    addNew__pManager();
    void setNewWebname(QString nWeb);
    void setNewUserName(QString nUser);
    void setNewPassword(QString nPass);
    void diskIN();
};

#endif // ADDNEW__PMANAGER_H
