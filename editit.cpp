#include "editit.h"
#include "ui_editit.h"

EditIt::EditIt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditIt)
{
    ui->setupUi(this);
}

EditIt::~EditIt()
{
    delete ui;
}

void EditIt::changeEvent(QEvent *e)
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

void EditIt::on_pushButton_clicked()
{

    string s,t,u;
    string s1,t1,u1;
    QString O="",M,N;
    ifstream fin("tmp.txt");
    fin>>ar;
    fin.close();
    strcat(ar,"Password.txt");

    ifstream F(ar,ios::app);
    i=1;

    while(!F.eof())
    {
     stringEnDc E,D,G;
     F>>s1;
     F>>t1;
     F>>u1;

     s=E.decryptIt(s1);
     t=D.decryptIt(t1);
     u=G.decryptIt(u1);

     strcpy(item[i][0],s.data());
     strcpy(item[i][1],t.data());
     strcpy(item[i][2],u.data());
     M=QString::number(i);
     N=N.fromStdString(s);
     i++;
     O=O+"  "+M+" .  "+N+"\n";
}
    F.close();

    ui->textEdit->setText(O);


}

void EditIt::on_pushButton_2_clicked()
{

    QMessageBox box;
    QString T;
    T=ui->lineEdit->text();
    serial=T.toInt();

    if(serial>0&&serial<i){
        for(int u=0;u<1000;u++)ui->progressBar->setValue(u);

        box.setText("now system is ready to edit your respective saved item");
        box.exec();

    std::string ui1(item[serial][0]);
    std::string ui2(item[serial][1]);
    std::string ui3(item[serial][2]);
    QString T1,T2,T3;

    T1=T1.fromStdString(ui1);
    T2=T2.fromStdString(ui2);
    T3=T3.fromStdString(ui3);


    ui->lineEdit_2->setText(T1);
    ui->lineEdit_3->setText(T2);
    ui->lineEdit_4->setText(T3);
}
    else {
        box.setText("INVALID SERIAL NO INPUT!!!");
        box.exec();
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
    }

}

void EditIt::on_pushButton_3_clicked()
{
    remove(ar);

    QString U,V,A;
    char W22[50],U22[50],P22[50];
    string s79,t79,r79;

    U=ui->lineEdit_2->text();
    V=ui->lineEdit_3->text();
    A=ui->lineEdit_4->text();

   s79=U.toStdString();
   t79=V.toStdString();
   r79=A.toStdString();

   strcpy(W22,s79.data());
   strcpy(U22,t79.data());
   strcpy(P22,r79.data());

   strcpy(item[serial][0],W22);
   strcpy(item[serial][1],U22);
   strcpy(item[serial][2],P22);

    ofstream fout(ar);

    for(int t=1;t<i;t++)
    {

            std::string str1(item[t][0]);
            std::string str2(item[t][1]);
            std::string str3(item[t][2]);

            stringEnDc O,P,C;
            string s,t,r;
            s=O.encryptIt(str1);
            t=P.encryptIt(str2);
            r=C.encryptIt(str3);

            fout<<endl<<s<<endl;
            fout<<t<<endl;
            fout<<r;


    }
    fout.close();
    QMessageBox qm;
    qm.setText("it has been edited successfully!!!");
    qm.exec();



}

void EditIt::on_pushButton_4_clicked()
{
    passwordManagerHome PG;
    this->hide();
    PG.exec();
}
