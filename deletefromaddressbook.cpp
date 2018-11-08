#include "deletefromaddressbook.h"
#include "ui_deletefromaddressbook.h"

DeleteFromAddressBook::DeleteFromAddressBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteFromAddressBook)
{
    ui->setupUi(this);
}

DeleteFromAddressBook::~DeleteFromAddressBook()
{
    delete ui;
}

void DeleteFromAddressBook::changeEvent(QEvent *e)
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

void DeleteFromAddressBook::on_pushButton_clicked()
{

    string s,s1,t1,t,r1,r,m,m1;
    QString P="",Q,R,M;
    ifstream fin("tmp.txt");
    fin>>file;
    fin.close();
    strcat(file,"Address.txt");

    ifstream f(file);
    i=1;

    while(!f.eof())
    {
        stringEnDc A,B,C,D;
        f>>s1;
        f>>t1;
        f>>r1;
        f>>m1;

        s=A.decryptIt(s1);
        t=B.decryptIt(t1);
        r=C.decryptIt(r1);
        m=D.decryptIt(m1);

        Q=Q.fromStdString(s);

        strcpy(ar1,s.data());
        strcpy(ar2,t.data());
        strcpy(ar3,r.data());
        strcpy(ar4,m.data());

        strcpy(item[i][0],ar1);
        strcpy(item[i][1],ar2);
        strcpy(item[i][2],ar3);
        strcpy(item[i][3],ar4);


        R=QString::number(i);
        i++;
        if(Q=="")P="currently no data is availabe!!!";
        else P=P+"  "+R+" .  "+Q+"\n";




    }

    ui->textEdit->setText(P);
    ui->pushButton_2->setEnabled(true);

}

void DeleteFromAddressBook::on_pushButton_2_clicked()
{
    QString M;
    QMessageBox qm;
    M=ui->lineEdit->text();
    serial=M.toInt();

    if(serial>0&&serial<i)
    {
       remove(file);
       ofstream fOUT(file,ios::app);
       for(int j=1;j<i;j++){
           stringEnDc A,B,C,D;
          if(j!=serial)
           {


              std::string s5(item[j][0]);
              std::string s6(item[j][1]);
              std::string s7(item[j][2]);
              std::string s8(item[j][3]);

              string p5,p6,p7,p8;

              p5=A.encryptIt(s5);
              p6=B.encryptIt(s6);
              p7=C.encryptIt(s7);
              p8=D.encryptIt(s8);

              fOUT<<endl<<p5<<endl;
              fOUT<<p6<<endl;
              fOUT<<p7<<endl;
              fOUT<<p8;



          }

       }
       fOUT.close();
        qm.setText("please wait,deleting.....");
        qm.exec();
        ui->pushButton_2->setEnabled(false);
        ui->lineEdit->setText("");
        qm.setText("you can see your list(excluding deleted item )by pressing SHOW MY LIST  again");
        qm.exec();
    }
    else
    {
        qm.setText("INVALID SERIAL NO !!! PLEASE CHECK AGAIN");
        qm.exec();
    }
}

void DeleteFromAddressBook::on_pushButton_3_clicked()
{
    addressbook AB;
    this->hide();
    AB.exec();
}
