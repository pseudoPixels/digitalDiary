#ifndef EDIT_ADDRESSBOOK_H
#define EDIT_ADDRESSBOOK_H
#include <iostream>
#include <fstream>
#include <string>
#include <QString>
#include <QMessageBox>
#include <SERVICE/stringendc.h>
using namespace std;


class edit_addressbook
{
    QString name,phone,email,address;
public:
    edit_addressbook();
    void setname(QString name);
    void setphone(QString phone);
    void setAddress(QString address);
    void setemail(QString email);
    void diskIn();
};

#endif // EDIT_ADDRESSBOOK_H
