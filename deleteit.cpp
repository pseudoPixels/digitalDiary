#include "deleteit.h"
#include "ui_deleteit.h"

DeleteIt::DeleteIt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteIt)
{
    ui->setupUi(this);
}

DeleteIt::~DeleteIt()
{
    delete ui;
}

void DeleteIt::changeEvent(QEvent *e)
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

void DeleteIt::on_pushButton_2_clicked()
{
     ui->pushButton_3->setEnabled(true);
    string s1,t1,r1;
    char ar1[50],ar2[50],ar3[50];

    P="";
    ui->textEdit->setText(P);
    i=1;

    ifstream fin("tmp.txt");
    fin>>file;
    fin.close();
    strcat(file,"Password.txt");

    ifstream ff(file);

    while(!ff.eof())
    {
        stringEnDc E,F,G;

        ff>>s;
        ff>>t;
        ff>>r;

        s1=E.decryptIt(s);
        t1=F.decryptIt(t);
        r1=G.decryptIt(r);


        strcpy(ar1,s1.data());
        strcpy(ar2,t1.data());
        strcpy(ar3,r1.data());



        strcpy(info[i][0],ar1);
        strcpy(info[i][1],ar2);
        strcpy(info[i][2],ar3);

        Q=Q.fromStdString(s1);
        R=QString::number(i);
        i++;
        P=P+R+" .  "+Q+"\n";
    }

    ui->textEdit->setText(P);
    ff.close();



}

void DeleteIt::on_pushButton_3_clicked()
{

    int serial,k,l;
    QString Q;
    QMessageBox Qm;
    QString B,N,M,G;
    string WW,UU,PP;
    string e,v,n;
    string WW1,UU1,PP1;

    Q=ui->lineEdit_2->text();
    serial=Q.toInt();

    if(serial>0&&serial<i)
    {
        remove(file);

        ofstream fAgain(file,ios::app);

         for(l=1;l<i;l++){
             if(serial!=l){
                 std::string User(info[l][0]);
                 std::string Web(info[l][1]);
                 std::string Pass(info[l][2]);

                 stringEnDc O1,O2,O3;

                 e=O1.encryptIt(User);
                 v=O2.encryptIt(Web);
                 n=O3.encryptIt(Pass);

                 fAgain<<endl<<e<<endl;
                 fAgain<<v<<endl;
                 fAgain<<n;

             }
         }

        Qm.setText("The item has been deleted successfully .");
        i--;
        ui->pushButton_3->setEnabled(false);
        ui->lineEdit_2->setText("");
        Qm.exec();
        fAgain.close();

        ifstream fUpdated(file,ios::app);

        G="";
        int u=1;
        while(!fUpdated.eof())
        {
            fUpdated>>WW1;
            fUpdated>>UU1;
            fUpdated>>PP1;
            stringEnDc OB1,OB2,OB3;

            WW=OB1.decryptIt(WW1);

            B=B.fromStdString(WW);


            N=QString::number(u);
            u++;

            G=G+N+"  .  "+B +"\n";



        }
        fUpdated.close();
        ui->textEdit->setText(G);

    }
    else {
        Qm.setText("INVALID SERIAL NO!!! Please enter a valid serial no");
        Qm.exec();
    }


}

void DeleteIt::on_pushButton_clicked()
{
    passwordManagerHome PQ;
    this->hide();
    PQ.exec();


}
