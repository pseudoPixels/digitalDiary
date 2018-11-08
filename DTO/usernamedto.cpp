#include "usernamedto.h"

userNameDto::userNameDto()
{
}
void userNameDto::setUserName(QString userName)
{
    this->userName=userName;
    this->tempUserName=userName;
    this->userName=enc.encryptIt(this->userName);
}

void userNameDto::setPassword(QString password)
{
    this->password=password;
    this->password=enc.encryptIt(this->password);
}



QString userNameDto::getUserName()
{
    return this->userName;
}

QString userNameDto::getPassword()
{
    return this->password;
}


void userNameDto::diskIn()
{
    string str;
    char PassTxt[50],NotesTxt[50],EventsTxt[50],AddressTxt[50],tmp[50];
    ofstream fout("Login.txt",ios::app);
    fout<<this->userName.toStdString()<<endl<<this->password.toStdString()<<endl;
    fout.close();

    str=tempUserName.toStdString();

    strcpy(PassTxt, str.data());
    strcpy(NotesTxt, str.data());
    strcpy(EventsTxt, str.data());
    strcpy(AddressTxt, str.data()) ;

    strcat(PassTxt,"Password.txt");
    strcat(EventsTxt,"Events.txt");
    strcat(NotesTxt,"Notes.txt");
    strcat(AddressTxt,"Address.txt");

    ofstream fout1(PassTxt,ios::app);
    fout1.close();
    ofstream fout2(EventsTxt,ios::app);
    fout2.close();
    ofstream fout3(NotesTxt,ios::app);
    fout3.close();
    ofstream fout4(AddressTxt,ios::app);
    fout4.close();
}
