#include "addressbook.h"
#include "ui_addressbook.h"

addressbook::addressbook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addressbook)
{
    ui->setupUi(this);
}

addressbook::~addressbook()
{
    delete ui;
}

void addressbook::changeEvent(QEvent *e)
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

void addressbook::on_pushButton_clicked()
{
    addataddressbook a;
    this->hide();
    a.exec();

}

void addressbook::on_pushButton_3_clicked()
{
    show_addressbook a;
    a.exec();

}

void addressbook::on_pushButton_2_clicked()
{
    DeleteFromAddressBook D;
    this->hide();
    D.exec();
}

void addressbook::on_pushButton_4_clicked()
{
    addressbookEdit ab;
    this->hide();
    ab.exec();
}

void addressbook::on_pushButton_5_clicked()
{
    digitaldiary DG;
    this->hide();
    DG.exec();
}
