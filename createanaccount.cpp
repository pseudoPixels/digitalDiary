#include "createanaccount.h"
#include "ui_createanaccount.h"

createAnAccount::createAnAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createAnAccount)
{
    ui->setupUi(this);
}

createAnAccount::~createAnAccount()
{
    delete ui;
}

void createAnAccount::changeEvent(QEvent *e)
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

void createAnAccount::on_pushButton_2_clicked()
{
   encryptionDecryption ed;

    QString Q,P,R,n;
   QMessageBox mb;
   Q=ui->lineEdit->text();
   P=ui->lineEdit_2->text();
   R=ui->lineEdit_3->text();
   n= ed.encryptIt(Q);
    ui->lineEdit->setText(n);
   if(P!=R){
       mb.setText("Confirmation does not match!!!");
       mb.exec();
       ui->lineEdit_2->setText("");
       ui->lineEdit_3->setText("");

   }
   else {
    D.setUserName(Q);
    D.setPassword(P);
    D.diskIn();
    mb.setText("New Account Has been Created");
    mb.exec();
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit->setText("");
    //this->close();
}



}

void createAnAccount::on_pushButton_clicked()
{
    this->close();

}
