#include "findit.h"
#include "ui_findit.h"
#include <passwordmanagerhome.h>
#include <SERVICE/stringendc.h>

findIt::findIt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::findIt)
{
    ui->setupUi(this);
}

findIt::~findIt()
{
    delete ui;
}

void findIt::changeEvent(QEvent *e)
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

void findIt::on_pushButton_clicked()
{
    char file[50];
    QString I,Q,P,R;
    string w,u,p,l,m;
    string w1,u1,p1;
    int flag=0;
    int count = 0,column=0;
    QTableWidgetItem *item;
    QTableWidget *table = ui->tableWidget;
    table->setColumnCount(3);
    QStringList qlist;
    qlist.push_back("Web Name");
    qlist.push_back("User Name");
    qlist.push_back("Password");

    table->setHorizontalHeaderLabels(qlist);




    char ar[50];

    I=ui->lineEdit->text();

    l=I.toStdString();

    ifstream fin("tmp.txt");
    fin>>file;
     fin.close();

    strcat(file,"Password.txt");

    ifstream fin1(file,ios::app);

    ofstream fo("ttt79.txt",ios::app);

    while(!fin1.eof()){
        stringEnDc A,B,C;
    fin1>>w1;
    fin1>>u1;
    fin1>>p1;
    w=A.decryptIt(w1);
    u=B.decryptIt(u1);
    p=C.decryptIt(p1);

    fo<<w<<u<<p;
    QString W3,U3,P3;
    if(w==l){
        W3=W3.fromStdString(w);
        U3=U3.fromStdString(u);
        P3=P3.fromStdString(p);
        table->setRowCount(count+1);
        item = new QTableWidgetItem(W3);
        table->setItem(count,column,item);
        column++;
        item = new QTableWidgetItem(U3);
        table->setItem(count,column,item);
        column++;
        item = new QTableWidgetItem(P3);
        table->setItem(count,column,item);
        column = 0;
        count++;

        /*fo<<"FOUND ONE MATCH";
        m=m+w+"  "+u+"  "+p+"\n";
        flag=1;*/
    }
}




    /*if(flag==0)ui->textEdit->setText("The searched Item Not Found");
    else if(flag=1){
        Q=Q.fromStdString(m);
        ui->textEdit->setText(Q);
    }*/

}

void findIt::on_pushButton_2_clicked()
{
    passwordManagerHome PH;
    this->hide();
    PH.exec();
}
