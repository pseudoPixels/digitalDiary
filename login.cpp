#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    ui->lineEdit->setPalette(QPalette(Qt::darkBlue));
    ui->lineEdit_2->setPalette(QPalette(Qt::darkRed));
}

login::~login()
{
    delete ui;
}

void login::changeEvent(QEvent *e)
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

void login::on_pushButton_2_clicked()
{

    passOrDigitalDiary pd;
    int flag=0;
     string R;
    QMessageBox box;
    string s,t,y,z;

    QString Q,W,X,Y;
    Q=ui->lineEdit->text();
    X=ui->lineEdit_2->text();
    ifstream fin("Login.txt");
    ofstream fout("Report.txt");
    while(!fin.eof()){
    stringEnDc E,D;

    getline(fin,s);
    getline(fin,y);

    t=E.decryptIt(s);
    z=D.decryptIt(y);

    W=W.fromStdString(t);
    Y=Y.fromStdString(z);


    if(Q==W && X==Y){
      flag=1;
      logCheck.setUserName(ui->lineEdit->text());

      addNewPasswordManager send;
      send.setIt(this->logCheck);
     }

    fout<<t<<endl;
    fout<<z<<endl;

   }
    fin.close();


    fout.close();





    if(flag){
        box.setText("You have successfully, loged in...");
        R=Q.toStdString();
        ofstream fout("tmp.txt");
        fout<<R;
        fout.close();
        box.exec();
        this->hide();
        pd.exec();

    }
    else if(flag==0){
        box.setText("you have enterd incorrect userName or Password , please check again...");
        box.exec();
    }



}

void login::on_pushButton_clicked()
{

   /* MainWindow mb;
    mb.show();*/

    this->close();
}
