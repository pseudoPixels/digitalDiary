#include "passwordmanagerhome.h"
#include "ui_passwordmanagerhome.h"
#include <addNewPasswordManager.h>
#include <iostream>
#include <search.h>
#include <QString>
using namespace std;

passwordManagerHome::passwordManagerHome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::passwordManagerHome)
{
    ui->setupUi(this);
}

passwordManagerHome::~passwordManagerHome()
{
    delete ui;
}

void passwordManagerHome::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void passwordManagerHome::on_pushButton_clicked()
{
   addNewPasswordManager l;
   this->hide();
   l.exec();

}

void passwordManagerHome::on_pushButton_2_clicked()
{
    viewAllPasswordManager V;
    V.exec();
}

void passwordManagerHome::on_pushButton_3_clicked()
{
    findIt F;
    this->hide();
    F.exec();

}

void passwordManagerHome::on_pushButton_4_clicked()
{
    DeleteIt D;
    this->hide();
    D.exec();
}

void passwordManagerHome::on_pushButton_6_clicked()
{
    EditIt E;
    this->hide();
    E.exec();
}

void passwordManagerHome::on_pushButton_5_clicked()
{
    passOrDigitalDiary PD;
    this->hide();
    PD.exec();
}
