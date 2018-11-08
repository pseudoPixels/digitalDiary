#include "edit_addressbook.h"
#include <QMessageBox>
#include <QString>
#include <iostream>

edit_addressbook::edit_addressbook()
{
}

void edit_addressbook::setname(QString name)
{
    this->name = name;

}

void edit_addressbook::setphone(QString phone)
{
    this->phone = phone;

}

void edit_addressbook::setAddress(QString address)
{
    this->address  = address;

}

void edit_addressbook::setemail(QString email)
{
    this->email = email;

}

void edit_addressbook::diskIn()
{
    string a,b,c,d,p,q,r,s;
    string a1,b1,c1,d1;
    char txtname[50];
    ifstream fin("tmp.txt");
    fin>>txtname;
    fin.close();
    strcat(txtname,"Address.txt");
    ofstream fout(txtname,ios::app);
    stringEnDc A,B,C,D;
    a1 = name.toStdString();
    b1 =phone.toStdString();
    c1 = address.toStdString();
    d1 = email.toStdString();
    a=A.encryptIt(a1);
    b=B.encryptIt(b1);
    c=C.encryptIt(c1);
    d=D.encryptIt(d1);

    if(fout<<endl<<a<<endl<<b<<endl<<c<<endl<<d)
    {
        QMessageBox m;
        m.setText("saved");
        m.exec();

    }
    fout.close();
}
