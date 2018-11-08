#include "viewallpasswordmanager.h"
#include "ui_viewallpasswordmanager.h"
#include <QWidget>
#include <QWidgetItem>
#include <vector>
#include <QTableWidgetItem>

viewAllPasswordManager::viewAllPasswordManager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewAllPasswordManager)
{
    ui->setupUi(this);

    string s,t,y,z,s1,t1,y1,z1;
    QTableWidgetItem *item;
    char ar[50];
    QString p="",Q,W,X,L;
    ifstream fin("tmp.txt");
    fin>>ar;
    fin.close();
    strcat(ar,"Password.txt");
    ifstream f(ar,ios::app);
    int count=0,column=0;
    QTableWidget *table = ui->tableWidget;
    table->setColumnCount(3);

    QStringList qlist;
    qlist.push_back("Web Name");
    qlist.push_back("User Name");
    qlist.push_back("Password");

    table->setHorizontalHeaderLabels(qlist);



    while(!f.eof())
    {
        table->setRowCount(count+1);
        stringEnDc A,B,C,D;
        f>>s1;
        f>>t1;
        f>>y1;


        s=A.decryptIt(s1);
        t=B.decryptIt(t1);
        y=C.decryptIt(y1);



        Q = Q.fromStdString(s);
        W = W.fromStdString(t);
        X = X.fromStdString(y);


        item = new QTableWidgetItem(Q);
        table->setItem(count,column,item);

        column++;
        item = new QTableWidgetItem(W);
        table->setItem(count,column,item);
        column++;
        item = new QTableWidgetItem(X);
        table->setItem(count,column,item);



        column = 0;
        count++;

    }
    f.close();
}

viewAllPasswordManager::~viewAllPasswordManager()
{
    delete ui;
}

void viewAllPasswordManager::changeEvent(QEvent *e)
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


void viewAllPasswordManager::on_pushButton_clicked()
{
    passwordManagerHome PH;

    this->hide();
    //PH.exec();
}

/*void viewAllPasswordManager::on_tableWidget_activated(QModelIndex index)
{

}*/
