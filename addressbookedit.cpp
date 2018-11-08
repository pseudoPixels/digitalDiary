#include "addressbookedit.h"
#include "ui_addressbookedit.h"

addressbookEdit::addressbookEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addressbookEdit)
{
    ui->setupUi(this);
}

addressbookEdit::~addressbookEdit()
{
    delete ui;
}

void addressbookEdit::changeEvent(QEvent *e)
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

void addressbookEdit::on_pushButton_clicked()
{
    string s,t,u,v;
    string s1,t1,u1,v1;
    QString O="",M,N;
    ifstream fin("tmp.txt");
    fin>>ar;
    fin.close();
    strcat(ar,"Address.txt");
    ifstream f(ar);
    i = 1;
    while(!f.eof())
    {
        stringEnDc E,D,G,X;
        f>>s1;
        f>>t1;
        f>>u1;
        f>>v1;
        s = E.decryptIt(s1);
        t = D.decryptIt(t1);
        u = G.decryptIt(u1);
        v = X.decryptIt(v1);

        strcpy(item[i][0],s.data());
        strcpy(item[i][1],t.data());
        strcpy(item[i][2],u.data());
        strcpy(item[i][3],v.data());

        M = QString::number(i);
        N = N.fromStdString(s);

        i++;

        O = O+"  "+M+" .   "+N+"\n";
    }
    f.close();
    ui->textEdit->setText(O);

    }


void addressbookEdit::on_pushButton_2_clicked()
{
    QMessageBox box;
    QString T;

    T = ui->lineEdit->text();
    serial = T.toInt();
    if(serial>0&&serial<i){
        for(int u=0;u<1000;u++)
        {
            ui->progressBar->setValue(u);
        }
        box.setText("System is Ready to Edit");
        box.exec();
        std::string ui1(item[serial][0]);
        std::string ui2(item[serial][1]);
        std::string ui3(item[serial][2]);
        std::string ui4(item[serial][3]);

        QString T1,T2,T3,T4;

        T1=T1.fromStdString(ui1);
        T2=T2.fromStdString(ui2);
        T3=T3.fromStdString(ui3);
        T4=T4.fromStdString(ui4);

        ui->lineEdit_2->setText(T1);
        ui->lineEdit_3->setText(T2);
        ui->lineEdit_4->setText(T3);
        ui->lineEdit_5->setText(T4);
    }

    else{
        box.setText("Invaild Serail Number !!!!!");
        box.exec();
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");



    }
}

void addressbookEdit::on_pushButton_3_clicked()
{
    remove (ar);
    QString U,V,A,Z;
    char w22[50],u22[50],p22[50],k22[50];
    string s79,t79,r79,l79;

    U = ui->lineEdit_2->text();
    V = ui->lineEdit_3->text();
    A = ui->lineEdit_4->text();
    Z = ui->lineEdit_5->text();

    s79 = U.toStdString();
    t79 = V.toStdString();
    r79 = A.toStdString();
    l79 = Z.toStdString();

    strcpy(w22,s79.data());
    strcpy(u22,t79.data());
    strcpy(p22,r79.data());
    strcpy(k22,l79.data());

    ofstream fout(ar);

    for(int t=1;t<i;t++)
    {
        std::string str1(item[t][0]);
        std::string str2(item[t][1]);
        std::string str3(item[t][2]);
        std::string str4(item[t][3]);

        stringEnDc o,p,c,j;
        string s,t,r,m;
        s = o.encryptIt(str1);
        t = p.encryptIt(str2);
        r = c.encryptIt(str3);
        m = j.encryptIt(str4);

        fout<<endl<<s<<endl<<t<<endl<<r<<endl<<m;


    }
    fout.close();
    QMessageBox qm;
    qm.setText("Data has been edited successfully!!!!");
    qm.exec();
}

void addressbookEdit::on_dateTimeEdit_editingFinished()
{

}

void addressbookEdit::on_pushButton_4_clicked()
{
    addressbook AB;
    this->hide();
    AB.exec();
}
