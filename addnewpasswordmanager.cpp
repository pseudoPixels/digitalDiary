#include "addnewpasswordmanager.h"
#include "ui_addnewpasswordmanager.h"
#include <QMessageBox>
addNewPasswordManager::addNewPasswordManager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addNewPasswordManager)
{
    ui->setupUi(this);
}

addNewPasswordManager::~addNewPasswordManager()
{
    delete ui;
}

void addNewPasswordManager::changeEvent(QEvent *e)
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

void addNewPasswordManager::on_pushButton_2_clicked()
{
    ifstream fin("tmp.txt");
    string get,sW,sU,sP,sW1,sU1,sP1;
    char file[50];
    QString W,U,P;
    stringEnDc E,F,G;

    fin>>get;
    fin.close();
    W=ui->lineEdit->text();
    U=ui->lineEdit_2->text();
    P=ui->lineEdit_3->text();

    sW=W.toStdString();
    sU=U.toStdString();
    sP=P.toStdString();

    sW1=E.encryptIt(sW);
    sU1=F.encryptIt(sU);
    sP1=G.encryptIt(sP);

    strcpy(file,get.data());

    strcat(file,"Password.txt");

    ofstream fout(file,ios::app);
    fout<<endl<<sW1<<endl;
    fout<<sU1<<endl;
    fout<<sP1;
    fout.close();
    QMessageBox QM;
    QM.setText("Data has been saved successfully!!!\n You can add more...");
    QM.exec();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();




}

void addNewPasswordManager::on_pushButton_clicked()
{
    passwordManagerHome PM;
    this->hide();
    PM.exec();
}
