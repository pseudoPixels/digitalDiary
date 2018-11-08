#include "addataddressbook.h"
#include "ui_addataddressbook.h"

addataddressbook::addataddressbook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addataddressbook)
{
    ui->setupUi(this);
}

addataddressbook::~addataddressbook()
{
    delete ui;
}

void addataddressbook::changeEvent(QEvent *e)
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

void addataddressbook::on_pushButton_clicked()
{
    QString t1,t2,t3,t4;
    t1 = ui->lineEdit->text();
    t2 = ui->lineEdit_2->text();
    t3 = ui->lineEdit_3->text();
    t4 = ui->lineEdit_4->text();
    if(t1==""||t2==""||t3==""||t4==""){
        QMessageBox Qm;
        Qm.setText("please, fill up all the fields..");
        Qm.exec();
    }
    else {
    edit_addressbook e;
    e.setname(t1);
    e.setphone(t2);
    e.setAddress(t3);
    e.setemail(t4);
    e.diskIn();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();

}
}

void addataddressbook::on_pushButton_2_clicked()
{
    addressbook AB;
    this->hide();
    AB.exec();
}
