#include "show_addressbook.h"
#include "ui_show_addressbook.h"
#include <QWidgetList>
#include <QTableWidgetItem>
#include <QTableWidget>
#include <vector>

show_addressbook::show_addressbook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::show_addressbook)
{
    ui->setupUi(this);
    string s,t,y,z,s1,t1,y1,z1;
    QTableWidgetItem *item;
    char ar[50];
    QString p="",Q,W,X,L;
    ifstream fin("tmp.txt");
    fin>>ar;
    fin.close();
    strcat(ar,"Address.txt");
    ifstream f(ar,ios::app);
    int count=0,column=0;
    QTableWidget *table = ui->tableWidget;
    table->setColumnCount(4);

    QStringList qlist;
    qlist.push_back("Name");
    qlist.push_back("Phone");
    qlist.push_back("Address");
    qlist.push_back("Email");
    table->setHorizontalHeaderLabels(qlist);



    while(!f.eof())
    {
        table->setRowCount(count+1);
        stringEnDc A,B,C,D;
        f>>s1;
        f>>t1;
        f>>y1;
        f>>z1;

        s=A.decryptIt(s1);
        t=B.decryptIt(t1);
        y=C.decryptIt(y1);
        z=D.decryptIt(z1);


        Q = Q.fromStdString(s);
        W = W.fromStdString(t);
        X = X.fromStdString(y);
        L = L.fromStdString(z);

        item = new QTableWidgetItem(Q);
        //table->setItem(count,column,item);
        ui->tableWidget->setItem(count,column,item);
        column++;
        item = new QTableWidgetItem(W);
        table->setItem(count,column,item);
        column++;
        item = new QTableWidgetItem(X);
        table->setItem(count,column,item);
        column++;
        item = new QTableWidgetItem(L);
        table->setItem(count,column,item);


        column = 0;
        count++;

      //  p= p+Q+"    "+W+"   "+X+"   "+L+"\n";
        //ui->textEdit->setText(p);

    }
    f.close();
    
}

show_addressbook::~show_addressbook()
{
    delete ui;
}

void show_addressbook::changeEvent(QEvent *e)
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



void show_addressbook::on_pushButton_clicked()
{
    this->close();
}

void show_addressbook::on_pushButton_2_clicked()
{
    addressbook AB;
    this->hide();
    //AB.exec();
}
