#include "viewcalender.h"
#include "ui_viewcalender.h"
#include <DTO/getfirstdayofmonth.h>
#include <iostream>
using namespace std;

ViewCalender::ViewCalender(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewCalender)
{
    ui->setupUi(this);
    ui->lineEdit_6->setVisible(false);






    QPalette* palette1 = new QPalette();
    palette1->setColor(QPalette::ButtonText,Qt::red);
    ui->textEdit->setPalette(*palette1);


    ui->lineEdit->setPalette(QPalette(Qt::yellow));




    const time_t curr = time(NULL);
    const tm* local = localtime(&curr);
    year=local->tm_year;
    year=year+1900;
    month=local->tm_mon;
    month=month+1;
    day=local->tm_mday;
    Ty=year;
    Tm=month;
    ui->lineEdit_4->setEnabled(false);
    ui->lineEdit->setEnabled(false);
    ui->lineEdit_5->setEnabled(false);

    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);

    if(month==2){
        ui->pushButton_46->setVisible(false);
        ui->pushButton_45->setVisible(false);
        if(year%4==0 && year%100!=0 ){ui->pushButton_44->setVisible(true);}
        else if(year%4==0 && year%100==0 && year%400==0){ui->pushButton_44->setVisible(true);}
        else ui->pushButton_44->setVisible(false);
    }
   else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
        ui->pushButton_44->setVisible(true);
        ui->pushButton_45->setVisible(true);
        ui->pushButton_46->setVisible(true);
    }
   else if(month==4||month==6||month==9||month==11){
       ui->pushButton_44->setVisible(true);
       ui->pushButton_45->setVisible(true);
       ui->pushButton_46->setVisible(false);
   }

    int c;
    QString U;
    U=QString ::number(year);
    ui->lineEdit_4->setText(U);
    if(month==1)ui->lineEdit_5->setText("January");
    else if(month==2)ui->lineEdit_5->setText("February");
    else if(month==3)ui->lineEdit_5->setText("March");
    else if(month==4)ui->lineEdit_5->setText("April");
    else if(month==5)ui->lineEdit_5->setText("May");
    else if(month==6)ui->lineEdit_5->setText("June");
    else if(month==7)ui->lineEdit_5->setText("July");
    else if(month==8)ui->lineEdit_5->setText("August");
    else if(month==9)ui->lineEdit_5->setText("September");
    else if(month==10)ui->lineEdit_5->setText("October");
    else if(month==11)ui->lineEdit_5->setText("November");
    else if(month==12)ui->lineEdit_5->setText("December");


    getFirstDayOfMonth G;
    c=G.getFirstDay(year,month);

         if(c==1)ui->lineEdit->setText("Thu          Fri      Sat      Sun    Mon      Tue       Wed");
    else if(c==2)ui->lineEdit->setText("Fri          Sat      Sun      Mon    Tue      Wed       Thu");
    else if(c==3)ui->lineEdit->setText("Sat          Sun      Mon      Tue    Wed      Thu       Fri");
    else if(c==4)ui->lineEdit->setText("Sun          Mon      Tue      Wed    Thu      Fri       Sat");
    else if(c==5)ui->lineEdit->setText("Mon          Tue      Wed      Thu    Fri      Sat       Sun");
    else if(c==6)ui->lineEdit->setText("Tue          Wed      Thu      Fri    Sat      Sun       Mon");
    else if(c==0)ui->lineEdit->setText("Wed          Thu      Fri      Sat    Sun      Mon       Tue");

    if(day==1)ui->pushButton->setPalette(*palette1);
    else if(day==2)ui->pushButton_2->setPalette(*palette1);
    else if(day==3)ui->pushButton_3->setPalette(*palette1);
    else if(day==4)ui->pushButton_4->setPalette(*palette1);
    else if(day==5)ui->pushButton_5->setPalette(*palette1);
    else if(day==6)ui->pushButton_6->setPalette(*palette1);
    else if(day==7)ui->pushButton_7->setPalette(*palette1);
    else if(day==8)ui->pushButton_23->setPalette(*palette1);
    else if(day==9)ui->pushButton_24->setPalette(*palette1);
    else if(day==10)ui->pushButton_25->setPalette(*palette1);
    else if(day==11)ui->pushButton_26->setPalette(*palette1);
    else if(day==12)ui->pushButton_27->setPalette(*palette1);
    else if(day==13)ui->pushButton_28->setPalette(*palette1);
    else if(day==14)ui->pushButton_29->setPalette(*palette1);
    else if(day==15)ui->pushButton_30->setPalette(*palette1);
    else if(day==16)ui->pushButton_31->setPalette(*palette1);
    else if(day==17)ui->pushButton_32->setPalette(*palette1);
    else if(day==18)ui->pushButton_33->setPalette(*palette1);
    else if(day==19)ui->pushButton_34->setPalette(*palette1);
    else if(day==20)ui->pushButton_35->setPalette(*palette1);
    else if(day==21)ui->pushButton_36->setPalette(*palette1);
    else if(day==22)ui->pushButton_37->setPalette(*palette1);
    else if(day==23)ui->pushButton_38->setPalette(*palette1);
    else if(day==24)ui->pushButton_39->setPalette(*palette1);
    else if(day==25)ui->pushButton_40->setPalette(*palette1);
    else if(day==26)ui->pushButton_41->setPalette(*palette1);
    else if(day==27)ui->pushButton_42->setPalette(*palette1);
    else if(day==28)ui->pushButton_43->setPalette(*palette1);
    else if(day==29)ui->pushButton_44->setPalette(*palette1);
    else if(day==30)ui->pushButton_45->setPalette(*palette1);
    else if(day==31)ui->pushButton_46->setPalette(*palette1);





}

ViewCalender::~ViewCalender()
{
    delete ui;
}

void ViewCalender::changeEvent(QEvent *e)
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

void ViewCalender::on_pushButton_8_clicked()
{
    QString YR,MN,showY,showM;
    int year1,month1;

    YR=ui->lineEdit_2->text();
    MN=ui->lineEdit_3->text();

    year1=YR.toInt();
    month1=MN.toInt();
    if(month1>=1&&month1<=12&&year1>=1970&&year1<=9999){
        year=year1;
        month=month1;

        if(month==1)ui->lineEdit_5->setText("January");
        else if(month==2)ui->lineEdit_5->setText("February");
        else if(month==3)ui->lineEdit_5->setText("March");
        else if(month==4)ui->lineEdit_5->setText("April");
        else if(month==5)ui->lineEdit_5->setText("May");
        else if(month==6)ui->lineEdit_5->setText("June");
        else if(month==7)ui->lineEdit_5->setText("July");
        else if(month==8)ui->lineEdit_5->setText("August");
        else if(month==9)ui->lineEdit_5->setText("September");
        else if(month==10)ui->lineEdit_5->setText("October");
        else if(month==11)ui->lineEdit_5->setText("November");
        else if(month==12)ui->lineEdit_5->setText("December");

    int c;
    getFirstDayOfMonth G;
    c=G.getFirstDay(year,month);

         if(c==1)ui->lineEdit->setText("Thu          Fri      Sat      Sun    Mon      Tue       Wed");
    else if(c==2)ui->lineEdit->setText("Fri          Sat      Sun      Mon    Tue      Wed       Thu");
    else if(c==3)ui->lineEdit->setText("Sat          Sun      Mon      Tue    Wed      Thu       Fri");
    else if(c==4)ui->lineEdit->setText("Sun          Mon      Tue      Wed    Thu      Fri       Sat");
    else if(c==5)ui->lineEdit->setText("Mon          Tue      Wed      Thu    Fri      Sat       Sun");
    else if(c==6)ui->lineEdit->setText("Tue          Wed      Thu      Fri    Sat      Sun       Mon");
    else if(c==0)ui->lineEdit->setText("Wed          Thu      Fri      Sat    Sun      Mon       Tue");


    if(month==2){
        ui->pushButton_46->setVisible(false);
        ui->pushButton_45->setVisible(false);
        if(year%4==0 && year%100!=0 ){ui->pushButton_44->setVisible(true);}
        else if(year%4==0 && year%100==0 && year%400==0){ui->pushButton_44->setVisible(true);}
        else ui->pushButton_44->setVisible(false);
    }
   else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
        ui->pushButton_44->setVisible(true);
        ui->pushButton_45->setVisible(true);
        ui->pushButton_46->setVisible(true);
    }
   else if(month==4||month==6||month==9||month==11){
       ui->pushButton_44->setVisible(true);
       ui->pushButton_45->setVisible(true);
       ui->pushButton_46->setVisible(false);
   }

   showY=QString::number(year);
   ui->lineEdit_4->setText(showY);
}

    else {
        QMessageBox BOx;
        BOx.setText("RESTRICTED JUMPING");
        BOx.exec();
    }

    QPalette* palette1 = new QPalette();
    palette1->setColor(QPalette::ButtonText,Qt::darkGreen);

    QPalette* palette2 = new QPalette();
    palette2->setColor(QPalette::ButtonText,Qt::red);


   if(year!=Ty||month!=Tm)ui->pushButton->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_2->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_3->setPalette(*palette1);
     if(year!=Ty||month!=Tm)ui->pushButton_4->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_5->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_6->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_7->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_23->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_24->setPalette(*palette1);
     if(year!=Ty||month!=Tm)ui->pushButton_25->setPalette(*palette1);
     if(year!=Ty||month!=Tm)ui->pushButton_26->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_28->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_29->setPalette(*palette1);
     if(year!=Ty||month!=Tm)ui->pushButton_30->setPalette(*palette1);
     if(year!=Ty||month!=Tm)ui->pushButton_31->setPalette(*palette1);
     if(year!=Ty||month!=Tm)ui->pushButton_32->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_33->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_34->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_35->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_36->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_37->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_38->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_39->setPalette(*palette1);
     if(year!=Ty||month!=Tm)ui->pushButton_40->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_41->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_42->setPalette(*palette1);
     if(year!=Ty||month!=Tm)ui->pushButton_43->setPalette(*palette1);
     if(year!=Ty||month!=Tm)ui->pushButton_44->setPalette(*palette1);
     if(year!=Ty||month!=Tm)ui->pushButton_45->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_46->setPalette(*palette1);

 //ui->pushButton->setPalette(*palette2);




    if(day==1&&Ty==year&&Tm==month)ui->pushButton->setPalette(*palette2);
     if(day==2&&Ty==year&&Tm==month)ui->pushButton_2->setPalette(*palette2);
   if(day==3&&Ty==year&&Tm==month)ui->pushButton_3->setPalette(*palette2);
      if(day==4&&Ty==year&&Tm==month)ui->pushButton_4->setPalette(*palette2);
     if(day==5&&Ty==year&&Tm==month)ui->pushButton_5->setPalette(*palette2);
    if(day==6&&Ty==year&&Tm==month)ui->pushButton_6->setPalette(*palette2);
     if(day==7&&Ty==year&&Tm==month)ui->pushButton_7->setPalette(*palette2);
   if(day==8&&Ty==year&&Tm==month)ui->pushButton_23->setPalette(*palette2);
   if(day==9&&Ty==year&&Tm==month)ui->pushButton_24->setPalette(*palette2);
     if(day==10&&Ty==year&&Tm==month)ui->pushButton_25->setPalette(*palette2);
    if(day==11&&Ty==year&&Tm==month)ui->pushButton_26->setPalette(*palette2);
    if(day==12&&Ty==year&&Tm==month)ui->pushButton_27->setPalette(*palette2);
     if(day==13&&Ty==year&&Tm==month)ui->pushButton_28->setPalette(*palette2);
     if(day==14&&Ty==year&&Tm==month)ui->pushButton_29->setPalette(*palette2);
   if(day==15&&Ty==year&&Tm==month)ui->pushButton_30->setPalette(*palette2);
     if(day==16&&Ty==year&&Tm==month)ui->pushButton_31->setPalette(*palette2);
    if(day==17&&Ty==year&&Tm==month)ui->pushButton_32->setPalette(*palette2);
    if(day==18&&Ty==year&&Tm==month)ui->pushButton_33->setPalette(*palette2);
    if(day==19&&Ty==year&&Tm==month)ui->pushButton_34->setPalette(*palette2);
    if(day==20&&Ty==year&&Tm==month)ui->pushButton_35->setPalette(*palette2);
     if(day==21&&Ty==year&&Tm==month)ui->pushButton_36->setPalette(*palette2);
    if(day==22&&Ty==year&&Tm==month)ui->pushButton_37->setPalette(*palette2);
     if(day==23&&Ty==year&&Tm==month)ui->pushButton_38->setPalette(*palette2);
     if(day==24&&Ty==year&&Tm==month)ui->pushButton_39->setPalette(*palette2);
    if(day==25&&Ty==year&&Tm==month)ui->pushButton_40->setPalette(*palette2);
    if(day==26&&Ty==year&&Tm==month)ui->pushButton_41->setPalette(*palette2);
     if(day==27&&Ty==year&&Tm==month)ui->pushButton_42->setPalette(*palette2);
      if(day==28&&Ty==year&&Tm==month)ui->pushButton_43->setPalette(*palette2);
      if(day==29&&Ty==year&&Tm==month)ui->pushButton_44->setPalette(*palette2);
     if(day==30&&Ty==year&&Tm==month)ui->pushButton_45->setPalette(*palette2);
   if(day==31&&Ty==year&&Tm==month)ui->pushButton_46->setPalette(*palette2);




}

void ViewCalender::on_pushButton_47_clicked()
{
    int c;
    QString Y,M;
    getFirstDayOfMonth G;
    year=year+1;
    if(year==10000)year=1970;
    Y=QString::number(year);
    ui->lineEdit_4->setText(Y);
    c=G.getFirstDay(year,month);

         if(c==1)ui->lineEdit->setText("Thu          Fri      Sat      Sun    Mon      Tue       Wed");
    else if(c==2)ui->lineEdit->setText("Fri          Sat      Sun      Mon    Tue      Wed       Thu");
    else if(c==3)ui->lineEdit->setText("Sat          Sun      Mon      Tue    Wed      Thu       Fri");
    else if(c==4)ui->lineEdit->setText("Sun          Mon      Tue      Wed    Thu      Fri       Sat");
    else if(c==5)ui->lineEdit->setText("Mon          Tue      Wed      Thu    Fri      Sat       Sun");
    else if(c==6)ui->lineEdit->setText("Tue          Wed      Thu      Fri    Sat      Sun       Mon");
    else if(c==0)ui->lineEdit->setText("Wed          Thu      Fri      Sat    Sun      Mon       Tue");

    if(month==2){
        ui->pushButton_46->setVisible(false);
        ui->pushButton_45->setVisible(false);
        if(year%4==0 && year%100!=0 ){ui->pushButton_44->setVisible(true);}
        else if(year%4==0 && year%100==0 && year%400==0){ui->pushButton_44->setVisible(true);}
        else ui->pushButton_44->setVisible(false);
    }
   else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
        ui->pushButton_44->setVisible(true);
        ui->pushButton_45->setVisible(true);
        ui->pushButton_46->setVisible(true);
    }
   else if(month==4||month==6||month==9||month==11){
       ui->pushButton_44->setVisible(true);
       ui->pushButton_45->setVisible(true);
       ui->pushButton_46->setVisible(false);
   }

   QPalette* palette1 = new QPalette();
   palette1->setColor(QPalette::ButtonText,Qt::darkGreen);

   QPalette* palette2 = new QPalette();
   palette2->setColor(QPalette::ButtonText,Qt::red);


  if(year!=Ty||month!=Tm)ui->pushButton->setPalette(*palette1);
  if(year!=Ty||month!=Tm)ui->pushButton_2->setPalette(*palette1);
  if(year!=Ty||month!=Tm)ui->pushButton_3->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_4->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_5->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_6->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_7->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_23->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_24->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_25->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_26->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_28->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_29->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_30->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_31->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_32->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_33->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_34->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_35->setPalette(*palette1);
  if(year!=Ty||month!=Tm)ui->pushButton_36->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_37->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_38->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_39->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_40->setPalette(*palette1);
  if(year!=Ty||month!=Tm)ui->pushButton_41->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_42->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_43->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_44->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_45->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_46->setPalette(*palette1);

//ui->pushButton->setPalette(*palette2);




   if(day==1&&Ty==year&&Tm==month)ui->pushButton->setPalette(*palette2);
    if(day==2&&Ty==year&&Tm==month)ui->pushButton_2->setPalette(*palette2);
  if(day==3&&Ty==year&&Tm==month)ui->pushButton_3->setPalette(*palette2);
     if(day==4&&Ty==year&&Tm==month)ui->pushButton_4->setPalette(*palette2);
    if(day==5&&Ty==year&&Tm==month)ui->pushButton_5->setPalette(*palette2);
   if(day==6&&Ty==year&&Tm==month)ui->pushButton_6->setPalette(*palette2);
    if(day==7&&Ty==year&&Tm==month)ui->pushButton_7->setPalette(*palette2);
  if(day==8&&Ty==year&&Tm==month)ui->pushButton_23->setPalette(*palette2);
  if(day==9&&Ty==year&&Tm==month)ui->pushButton_24->setPalette(*palette2);
    if(day==10&&Ty==year&&Tm==month)ui->pushButton_25->setPalette(*palette2);
   if(day==11&&Ty==year&&Tm==month)ui->pushButton_26->setPalette(*palette2);
   if(day==12&&Ty==year&&Tm==month)ui->pushButton_27->setPalette(*palette2);
    if(day==13&&Ty==year&&Tm==month)ui->pushButton_28->setPalette(*palette2);
    if(day==14&&Ty==year&&Tm==month)ui->pushButton_29->setPalette(*palette2);
  if(day==15&&Ty==year&&Tm==month)ui->pushButton_30->setPalette(*palette2);
    if(day==16&&Ty==year&&Tm==month)ui->pushButton_31->setPalette(*palette2);
   if(day==17&&Ty==year&&Tm==month)ui->pushButton_32->setPalette(*palette2);
   if(day==18&&Ty==year&&Tm==month)ui->pushButton_33->setPalette(*palette2);
   if(day==19&&Ty==year&&Tm==month)ui->pushButton_34->setPalette(*palette2);
   if(day==20&&Ty==year&&Tm==month)ui->pushButton_35->setPalette(*palette2);
    if(day==21&&Ty==year&&Tm==month)ui->pushButton_36->setPalette(*palette2);
   if(day==22&&Ty==year&&Tm==month)ui->pushButton_37->setPalette(*palette2);
    if(day==23&&Ty==year&&Tm==month)ui->pushButton_38->setPalette(*palette2);
    if(day==24&&Ty==year&&Tm==month)ui->pushButton_39->setPalette(*palette2);
   if(day==25&&Ty==year&&Tm==month)ui->pushButton_40->setPalette(*palette2);
   if(day==26&&Ty==year&&Tm==month)ui->pushButton_41->setPalette(*palette2);
    if(day==27&&Ty==year&&Tm==month)ui->pushButton_42->setPalette(*palette2);
     if(day==28&&Ty==year&&Tm==month)ui->pushButton_43->setPalette(*palette2);
     if(day==29&&Ty==year&&Tm==month)ui->pushButton_44->setPalette(*palette2);
    if(day==30&&Ty==year&&Tm==month)ui->pushButton_45->setPalette(*palette2);
  if(day==31&&Ty==year&&Tm==month)ui->pushButton_46->setPalette(*palette2);


}

void ViewCalender::on_pushButton_48_clicked()
{
    int c;
    QString Y,M;
    getFirstDayOfMonth G;
    year=year-1;
    if(year==1969)year=9999;
    Y=QString::number(year);
    ui->lineEdit_4->setText(Y);
    c=G.getFirstDay(year,month);

         if(c==1)ui->lineEdit->setText("Thu          Fri      Sat      Sun    Mon      Tue       Wed");
    else if(c==2)ui->lineEdit->setText("Fri          Sat      Sun      Mon    Tue      Wed       Thu");
    else if(c==3)ui->lineEdit->setText("Sat          Sun      Mon      Tue    Wed      Thu       Fri");
    else if(c==4)ui->lineEdit->setText("Sun          Mon      Tue      Wed    Thu      Fri       Sat");
    else if(c==5)ui->lineEdit->setText("Mon          Tue      Wed      Thu    Fri      Sat       Sun");
    else if(c==6)ui->lineEdit->setText("Tue          Wed      Thu      Fri    Sat      Sun       Mon");
    else if(c==0)ui->lineEdit->setText("Wed          Thu      Fri      Sat    Sun      Mon       Tue");

    if(month==2){
        ui->pushButton_46->setVisible(false);
        ui->pushButton_45->setVisible(false);
        if(year%4==0 && year%100!=0 ){ui->pushButton_44->setVisible(true);}
        else if(year%4==0 && year%100==0 && year%400==0){ui->pushButton_44->setVisible(true);}
        else ui->pushButton_44->setVisible(false);
    }
   else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
        ui->pushButton_44->setVisible(true);
        ui->pushButton_45->setVisible(true);
        ui->pushButton_46->setVisible(true);
    }
   else if(month==4||month==6||month==9||month==11){
       ui->pushButton_44->setVisible(true);
       ui->pushButton_45->setVisible(true);
       ui->pushButton_46->setVisible(false);
   }

   QPalette* palette1 = new QPalette();
   palette1->setColor(QPalette::ButtonText,Qt::darkGreen);

   QPalette* palette2 = new QPalette();
   palette2->setColor(QPalette::ButtonText,Qt::red);


  if(year!=Ty||month!=Tm)ui->pushButton->setPalette(*palette1);
  if(year!=Ty||month!=Tm)ui->pushButton_2->setPalette(*palette1);
  if(year!=Ty||month!=Tm)ui->pushButton_3->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_4->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_5->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_6->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_7->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_23->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_24->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_25->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_26->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_28->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_29->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_30->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_31->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_32->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_33->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_34->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_35->setPalette(*palette1);
  if(year!=Ty||month!=Tm)ui->pushButton_36->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_37->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_38->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_39->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_40->setPalette(*palette1);
  if(year!=Ty||month!=Tm)ui->pushButton_41->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_42->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_43->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_44->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_45->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_46->setPalette(*palette1);






   if(day==1&&Ty==year&&Tm==month)ui->pushButton->setPalette(*palette2);
    if(day==2&&Ty==year&&Tm==month)ui->pushButton_2->setPalette(*palette2);
  if(day==3&&Ty==year&&Tm==month)ui->pushButton_3->setPalette(*palette2);
     if(day==4&&Ty==year&&Tm==month)ui->pushButton_4->setPalette(*palette2);
    if(day==5&&Ty==year&&Tm==month)ui->pushButton_5->setPalette(*palette2);
   if(day==6&&Ty==year&&Tm==month)ui->pushButton_6->setPalette(*palette2);
    if(day==7&&Ty==year&&Tm==month)ui->pushButton_7->setPalette(*palette2);
  if(day==8&&Ty==year&&Tm==month)ui->pushButton_23->setPalette(*palette2);
  if(day==9&&Ty==year&&Tm==month)ui->pushButton_24->setPalette(*palette2);
    if(day==10&&Ty==year&&Tm==month)ui->pushButton_25->setPalette(*palette2);
   if(day==11&&Ty==year&&Tm==month)ui->pushButton_26->setPalette(*palette2);
   if(day==12&&Ty==year&&Tm==month)ui->pushButton_27->setPalette(*palette2);
    if(day==13&&Ty==year&&Tm==month)ui->pushButton_28->setPalette(*palette2);
    if(day==14&&Ty==year&&Tm==month)ui->pushButton_29->setPalette(*palette2);
  if(day==15&&Ty==year&&Tm==month)ui->pushButton_30->setPalette(*palette2);
    if(day==16&&Ty==year&&Tm==month)ui->pushButton_31->setPalette(*palette2);
   if(day==17&&Ty==year&&Tm==month)ui->pushButton_32->setPalette(*palette2);
   if(day==18&&Ty==year&&Tm==month)ui->pushButton_33->setPalette(*palette2);
   if(day==19&&Ty==year&&Tm==month)ui->pushButton_34->setPalette(*palette2);
   if(day==20&&Ty==year&&Tm==month)ui->pushButton_35->setPalette(*palette2);
    if(day==21&&Ty==year&&Tm==month)ui->pushButton_36->setPalette(*palette2);
   if(day==22&&Ty==year&&Tm==month)ui->pushButton_37->setPalette(*palette2);
    if(day==23&&Ty==year&&Tm==month)ui->pushButton_38->setPalette(*palette2);
    if(day==24&&Ty==year&&Tm==month)ui->pushButton_39->setPalette(*palette2);
   if(day==25&&Ty==year&&Tm==month)ui->pushButton_40->setPalette(*palette2);
   if(day==26&&Ty==year&&Tm==month)ui->pushButton_41->setPalette(*palette2);
    if(day==27&&Ty==year&&Tm==month)ui->pushButton_42->setPalette(*palette2);
     if(day==28&&Ty==year&&Tm==month)ui->pushButton_43->setPalette(*palette2);
     if(day==29&&Ty==year&&Tm==month)ui->pushButton_44->setPalette(*palette2);
    if(day==30&&Ty==year&&Tm==month)ui->pushButton_45->setPalette(*palette2);
  if(day==31&&Ty==year&&Tm==month)ui->pushButton_46->setPalette(*palette2);
}

void ViewCalender::on_pushButton_50_clicked()
{
    int c;
    QString Y,M;
    getFirstDayOfMonth G;
    month=month+1;
    if(month==13)month=1;

    if(month==1)ui->lineEdit_5->setText("January");
    else if(month==2)ui->lineEdit_5->setText("February");
    else if(month==3)ui->lineEdit_5->setText("March");
    else if(month==4)ui->lineEdit_5->setText("April");
    else if(month==5)ui->lineEdit_5->setText("May");
    else if(month==6)ui->lineEdit_5->setText("June");
    else if(month==7)ui->lineEdit_5->setText("July");
    else if(month==8)ui->lineEdit_5->setText("August");
    else if(month==9)ui->lineEdit_5->setText("September");
    else if(month==10)ui->lineEdit_5->setText("October");
    else if(month==11)ui->lineEdit_5->setText("November");
    else if(month==12)ui->lineEdit_5->setText("December");


    Y=QString::number(year);
    ui->lineEdit_4->setText(Y);
    c=G.getFirstDay(year,month);

         if(c==1)ui->lineEdit->setText("Thu          Fri      Sat      Sun    Mon      Tue       Wed");
    else if(c==2)ui->lineEdit->setText("Fri          Sat      Sun      Mon    Tue      Wed       Thu");
    else if(c==3)ui->lineEdit->setText("Sat          Sun      Mon      Tue    Wed      Thu       Fri");
    else if(c==4)ui->lineEdit->setText("Sun          Mon      Tue      Wed    Thu      Fri       Sat");
    else if(c==5)ui->lineEdit->setText("Mon          Tue      Wed      Thu    Fri      Sat       Sun");
    else if(c==6)ui->lineEdit->setText("Tue          Wed      Thu      Fri    Sat      Sun       Mon");
    else if(c==0)ui->lineEdit->setText("Wed          Thu      Fri      Sat    Sun      Mon       Tue");



    if(month==2){
        ui->pushButton_46->setVisible(false);
        ui->pushButton_45->setVisible(false);
        if(year%4==0 && year%100!=0 ){ui->pushButton_44->setVisible(true);}
        else if(year%4==0 && year%100==0 && year%400==0){ui->pushButton_44->setVisible(true);}
        else ui->pushButton_44->setVisible(false);
    }
   else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
        ui->pushButton_44->setVisible(true);
        ui->pushButton_45->setVisible(true);
        ui->pushButton_46->setVisible(true);
    }
   else if(month==4||month==6||month==9||month==11){
       ui->pushButton_44->setVisible(true);
       ui->pushButton_45->setVisible(true);
       ui->pushButton_46->setVisible(false);
   }

   QPalette* palette1 = new QPalette();
   palette1->setColor(QPalette::ButtonText,Qt::darkGreen);

   QPalette* palette2 = new QPalette();
   palette2->setColor(QPalette::ButtonText,Qt::red);


  if(year!=Ty||month!=Tm)ui->pushButton->setPalette(*palette1);
  if(year!=Ty||month!=Tm)ui->pushButton_2->setPalette(*palette1);
  if(year!=Ty||month!=Tm)ui->pushButton_3->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_4->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_5->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_6->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_7->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_23->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_24->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_25->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_26->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_28->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_29->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_30->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_31->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_32->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_33->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_34->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_35->setPalette(*palette1);
  if(year!=Ty||month!=Tm)ui->pushButton_36->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_37->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_38->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_39->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_40->setPalette(*palette1);
  if(year!=Ty||month!=Tm)ui->pushButton_41->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_42->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_43->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_44->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_45->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_46->setPalette(*palette1);






   if(day==1&&Ty==year&&Tm==month)ui->pushButton->setPalette(*palette2);
    if(day==2&&Ty==year&&Tm==month)ui->pushButton_2->setPalette(*palette2);
  if(day==3&&Ty==year&&Tm==month)ui->pushButton_3->setPalette(*palette2);
     if(day==4&&Ty==year&&Tm==month)ui->pushButton_4->setPalette(*palette2);
    if(day==5&&Ty==year&&Tm==month)ui->pushButton_5->setPalette(*palette2);
   if(day==6&&Ty==year&&Tm==month)ui->pushButton_6->setPalette(*palette2);
    if(day==7&&Ty==year&&Tm==month)ui->pushButton_7->setPalette(*palette2);
  if(day==8&&Ty==year&&Tm==month)ui->pushButton_23->setPalette(*palette2);
  if(day==9&&Ty==year&&Tm==month)ui->pushButton_24->setPalette(*palette2);
    if(day==10&&Ty==year&&Tm==month)ui->pushButton_25->setPalette(*palette2);
   if(day==11&&Ty==year&&Tm==month)ui->pushButton_26->setPalette(*palette2);
   if(day==12&&Ty==year&&Tm==month)ui->pushButton_27->setPalette(*palette2);
    if(day==13&&Ty==year&&Tm==month)ui->pushButton_28->setPalette(*palette2);
    if(day==14&&Ty==year&&Tm==month)ui->pushButton_29->setPalette(*palette2);
  if(day==15&&Ty==year&&Tm==month)ui->pushButton_30->setPalette(*palette2);
    if(day==16&&Ty==year&&Tm==month)ui->pushButton_31->setPalette(*palette2);
   if(day==17&&Ty==year&&Tm==month)ui->pushButton_32->setPalette(*palette2);
   if(day==18&&Ty==year&&Tm==month)ui->pushButton_33->setPalette(*palette2);
   if(day==19&&Ty==year&&Tm==month)ui->pushButton_34->setPalette(*palette2);
   if(day==20&&Ty==year&&Tm==month)ui->pushButton_35->setPalette(*palette2);
    if(day==21&&Ty==year&&Tm==month)ui->pushButton_36->setPalette(*palette2);
   if(day==22&&Ty==year&&Tm==month)ui->pushButton_37->setPalette(*palette2);
    if(day==23&&Ty==year&&Tm==month)ui->pushButton_38->setPalette(*palette2);
    if(day==24&&Ty==year&&Tm==month)ui->pushButton_39->setPalette(*palette2);
   if(day==25&&Ty==year&&Tm==month)ui->pushButton_40->setPalette(*palette2);
   if(day==26&&Ty==year&&Tm==month)ui->pushButton_41->setPalette(*palette2);
    if(day==27&&Ty==year&&Tm==month)ui->pushButton_42->setPalette(*palette2);
     if(day==28&&Ty==year&&Tm==month)ui->pushButton_43->setPalette(*palette2);
     if(day==29&&Ty==year&&Tm==month)ui->pushButton_44->setPalette(*palette2);
    if(day==30&&Ty==year&&Tm==month)ui->pushButton_45->setPalette(*palette2);
  if(day==31&&Ty==year&&Tm==month)ui->pushButton_46->setPalette(*palette2);



}

void ViewCalender::on_pushButton_49_clicked()
{
    int c;
    QString Y,M;
    getFirstDayOfMonth G;
    month=month-1;
    if(month==0)month=12;
    if(month==1)ui->lineEdit_5->setText("January");
    else if(month==2)ui->lineEdit_5->setText("February");
    else if(month==3)ui->lineEdit_5->setText("March");
    else if(month==4)ui->lineEdit_5->setText("April");
    else if(month==5)ui->lineEdit_5->setText("May");
    else if(month==6)ui->lineEdit_5->setText("June");
    else if(month==7)ui->lineEdit_5->setText("July");
    else if(month==8)ui->lineEdit_5->setText("August");
    else if(month==9)ui->lineEdit_5->setText("September");
    else if(month==10)ui->lineEdit_5->setText("October");
    else if(month==11)ui->lineEdit_5->setText("November");
    else if(month==12)ui->lineEdit_5->setText("December");

    Y=QString::number(year);
    ui->lineEdit_4->setText(Y);
    c=G.getFirstDay(year,month);

         if(c==1)ui->lineEdit->setText("Thu          Fri      Sat      Sun    Mon      Tue       Wed");
    else if(c==2)ui->lineEdit->setText("Fri          Sat      Sun      Mon    Tue      Wed       Thu");
    else if(c==3)ui->lineEdit->setText("Sat          Sun      Mon      Tue    Wed      Thu       Fri");
    else if(c==4)ui->lineEdit->setText("Sun          Mon      Tue      Wed    Thu      Fri       Sat");
    else if(c==5)ui->lineEdit->setText("Mon          Tue      Wed      Thu    Fri      Sat       Sun");
    else if(c==6)ui->lineEdit->setText("Tue          Wed      Thu      Fri    Sat      Sun       Mon");
    else if(c==0)ui->lineEdit->setText("Wed          Thu      Fri      Sat    Sun      Mon       Tue");

    if(month==2){
        ui->pushButton_46->setVisible(false);
        ui->pushButton_45->setVisible(false);
        if(year%4==0 && year%100!=0 ){ui->pushButton_44->setVisible(true);}
        else if(year%4==0 && year%100==0 && year%400==0){ui->pushButton_44->setVisible(true);}
        else ui->pushButton_44->setVisible(false);
    }
   else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
        ui->pushButton_44->setVisible(true);
        ui->pushButton_45->setVisible(true);
        ui->pushButton_46->setVisible(true);
    }
   else if(month==4||month==6||month==9||month==11){
       ui->pushButton_44->setVisible(true);
       ui->pushButton_45->setVisible(true);
       ui->pushButton_46->setVisible(false);
   }
   QPalette* palette1 = new QPalette();
   palette1->setColor(QPalette::ButtonText,Qt::darkGreen);

   QPalette* palette2 = new QPalette();
   palette2->setColor(QPalette::ButtonText,Qt::red);


  if(year!=Ty||month!=Tm)ui->pushButton->setPalette(*palette1);
  if(year!=Ty||month!=Tm)ui->pushButton_2->setPalette(*palette1);
  if(year!=Ty||month!=Tm)ui->pushButton_3->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_4->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_5->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_6->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_7->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_23->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_24->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_25->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_26->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_28->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_29->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_30->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_31->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_32->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_33->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_34->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_35->setPalette(*palette1);
  if(year!=Ty||month!=Tm)ui->pushButton_36->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_37->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_38->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_39->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_40->setPalette(*palette1);
  if(year!=Ty||month!=Tm)ui->pushButton_41->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_42->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_43->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_44->setPalette(*palette1);
    if(year!=Ty||month!=Tm)ui->pushButton_45->setPalette(*palette1);
   if(year!=Ty||month!=Tm)ui->pushButton_46->setPalette(*palette1);






   if(day==1&&Ty==year&&Tm==month)ui->pushButton->setPalette(*palette2);
    if(day==2&&Ty==year&&Tm==month)ui->pushButton_2->setPalette(*palette2);
  if(day==3&&Ty==year&&Tm==month)ui->pushButton_3->setPalette(*palette2);
     if(day==4&&Ty==year&&Tm==month)ui->pushButton_4->setPalette(*palette2);
    if(day==5&&Ty==year&&Tm==month)ui->pushButton_5->setPalette(*palette2);
   if(day==6&&Ty==year&&Tm==month)ui->pushButton_6->setPalette(*palette2);
    if(day==7&&Ty==year&&Tm==month)ui->pushButton_7->setPalette(*palette2);
  if(day==8&&Ty==year&&Tm==month)ui->pushButton_23->setPalette(*palette2);
  if(day==9&&Ty==year&&Tm==month)ui->pushButton_24->setPalette(*palette2);
    if(day==10&&Ty==year&&Tm==month)ui->pushButton_25->setPalette(*palette2);
   if(day==11&&Ty==year&&Tm==month)ui->pushButton_26->setPalette(*palette2);
   if(day==12&&Ty==year&&Tm==month)ui->pushButton_27->setPalette(*palette2);
    if(day==13&&Ty==year&&Tm==month)ui->pushButton_28->setPalette(*palette2);
    if(day==14&&Ty==year&&Tm==month)ui->pushButton_29->setPalette(*palette2);
  if(day==15&&Ty==year&&Tm==month)ui->pushButton_30->setPalette(*palette2);
    if(day==16&&Ty==year&&Tm==month)ui->pushButton_31->setPalette(*palette2);
   if(day==17&&Ty==year&&Tm==month)ui->pushButton_32->setPalette(*palette2);
   if(day==18&&Ty==year&&Tm==month)ui->pushButton_33->setPalette(*palette2);
   if(day==19&&Ty==year&&Tm==month)ui->pushButton_34->setPalette(*palette2);
   if(day==20&&Ty==year&&Tm==month)ui->pushButton_35->setPalette(*palette2);
    if(day==21&&Ty==year&&Tm==month)ui->pushButton_36->setPalette(*palette2);
   if(day==22&&Ty==year&&Tm==month)ui->pushButton_37->setPalette(*palette2);
    if(day==23&&Ty==year&&Tm==month)ui->pushButton_38->setPalette(*palette2);
    if(day==24&&Ty==year&&Tm==month)ui->pushButton_39->setPalette(*palette2);
   if(day==25&&Ty==year&&Tm==month)ui->pushButton_40->setPalette(*palette2);
   if(day==26&&Ty==year&&Tm==month)ui->pushButton_41->setPalette(*palette2);
    if(day==27&&Ty==year&&Tm==month)ui->pushButton_42->setPalette(*palette2);
     if(day==28&&Ty==year&&Tm==month)ui->pushButton_43->setPalette(*palette2);
     if(day==29&&Ty==year&&Tm==month)ui->pushButton_44->setPalette(*palette2);
    if(day==30&&Ty==year&&Tm==month)ui->pushButton_45->setPalette(*palette2);
  if(day==31&&Ty==year&&Tm==month)ui->pushButton_46->setPalette(*palette2);


}

void ViewCalender::on_pushButton_clicked()
{
    ui->textEdit->setText("");

    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"1st";
    fDate.close();


    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("1st",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!! First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }

}

void ViewCalender::on_pushButton_2_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"2nd";
    fDate.close();


    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("2nd",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_3_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;

    ofstream fDate("dt.txt");
    fDate<<"3rd";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("3rd",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_4_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;

    ofstream fDate("dt.txt");
    fDate<<"4th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("4th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_5_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"5th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("5th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_6_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;

    ofstream fDate("dt.txt");
    fDate<<"6th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("6th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_7_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;

    ofstream fDate("dt.txt");
    fDate<<"7th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("7th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_23_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"8th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("8th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_24_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"9th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("9th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_25_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;

    ofstream fDate("dt.txt");
    fDate<<"10th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("10th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_26_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"11th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("11t",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_27_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;

    ofstream fDate("dt.txt");
    fDate<<"12th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("12th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_28_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"13th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("13th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_29_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"14th";
    fDate.close();


    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("14th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_30_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"15th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("15th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_31_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"16th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("16th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_32_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"17th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("17th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_33_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"18th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("18th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_34_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"19th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("19th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_35_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"20th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("20th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_36_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"21st";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("21st",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_37_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"22nd";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("22nd",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_38_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"23rd";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("23rd",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_39_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"24th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("24th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_40_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"25th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("25th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_41_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"26th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("26th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_42_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"27th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("27th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();

    }
}

void ViewCalender::on_pushButton_43_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"28th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("28th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();
    }
}

void ViewCalender::on_pushButton_44_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"29th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("29th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();
    }
}

void ViewCalender::on_pushButton_45_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"30th";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("30th",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();
    }
}

void ViewCalender::on_pushButton_46_clicked()
{
    ui->textEdit->setText("");
    QString M,Y;
    ofstream fDate("dt.txt");
    fDate<<"31st";
    fDate.close();

    Y=ui->lineEdit_4->text();
    M=ui->lineEdit_5->text();

    didIwroteAnything D;
    bool b;
    b=D.isAnyPrevData("31st",M,Y);

    if(b==true)
    {
        ui->pushButton_9->setEnabled(false);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
    }
    else if(b==false)
    {
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(false);
        ui->pushButton_11->setEnabled(false);
        ui->pushButton_12->setEnabled(false);
        QMessageBox Qm;
        Qm.setText("Now you can write on your Diary !!!First finish your writing on the page and then press ADD to save your content");
        Qm.exec();
    }
}

void ViewCalender::on_pushButton_9_clicked()
{

    QString INPUT;
    QString yR,mN;
    string syR,smN,sINPUT;
    char cyR[50],cmN[50];
    char write[50],inp[50],fTake[50];
    strcpy(write,"()");

    ifstream f("dt.txt");
    f>>inp;
    f.close();
    strcat(write,inp);


    yR=ui->lineEdit_4->text();
    mN=ui->lineEdit_5->text();

    syR=yR.toStdString();
    smN=mN.toStdString();

    strcpy(cyR,syR.data());
    strcpy(cmN,smN.data());

    strcat(write,cmN);
    strcat(write,cyR);
    strcat(write,"()");

    ifstream fName("tmp.txt");
    fName>>fTake;
    fName.close();

    strcat(fTake,"Notes.txt");

    ofstream FileWrite(fTake,ios::app);

    FileWrite<<endl<<write<<endl;

    ofstream fTemporary("temporary.txt");

    INPUT=ui->textEdit->toPlainText();
    sINPUT=INPUT.toStdString();
    fTemporary<<sINPUT;
    fTemporary.close();

    ifstream fTEMP("temporary.txt");

    string shift,shift1;
    int uio=0;
    while(!fTEMP.eof())
    {
        uio++;
        stringEnDc E;
        fTEMP>>shift1;
        shift=E.encryptIt(shift1);
        char test[500];
        strcpy(test,shift.data());
        for(int len=0;len<strlen(test);len++)test[len]=(char)((int)test[len]+1);
        FileWrite<<" "<<test;
        if(uio==120){
           FileWrite<<endl;
           uio=0;
        }

    }
    fTEMP.close();
    remove("temporary.txt");


    FileWrite<<endl<<"  (~!~eof)";

    FileWrite.close();

       QMessageBox BOx;
       BOx.setText("your writing has been saved...");
       BOx.exec();
       ui->lineEdit_6->setText("");
       ui->textEdit->setText("");


}

void ViewCalender::on_pushButton_12_clicked()
{
    QString INPUT;
    QString yR,mN;
    string syR,smN,sINPUT;
    char cyR[50],cmN[50];
    char write[50],inp[50],fTake[50];
    char input1[50];
    strcpy(write,"()");

    ifstream f("dt.txt");
    f>>inp;
    f.close();
    strcat(write,inp);


    yR=ui->lineEdit_4->text();
    mN=ui->lineEdit_5->text();

    syR=yR.toStdString();
    smN=mN.toStdString();

    strcpy(cyR,syR.data());
    strcpy(cmN,smN.data());

    strcat(write,cmN);
    strcat(write,cyR);
    strcat(write,"()");

    ifstream fName("tmp.txt");
    fName>>fTake;
    fName.close();

    strcat(fTake,"Notes.txt");

    ifstream readItForMe(fTake,ios::app);

    while(!readItForMe.eof())
    {
        readItForMe>>input1;
        if(strcmp(input1,write)==0){
            break;
        }
    }
    sINPUT="";
    while(1)
    {
        readItForMe>>input1;

        if(strcmp(input1,"(~!~eof)")==0)break;
        else {
            for(int mn=0;mn<strlen(input1);mn++)input1[mn]=(char)((int)input1[mn]-1);
            stringEnDc F;
            std::string jk1(input1);
            string jk;
            jk=F.decryptIt(jk1);

            sINPUT=sINPUT+"  "+jk;
        }
    }

   INPUT=INPUT.fromStdString(sINPUT);

   ui->textEdit->setText(INPUT);


}

void ViewCalender::on_pushButton_11_clicked()
{
    QString INPUT;
    QString yR,mN;
    string syR,smN,sINPUT;
    char cyR[50],cmN[50];
    char write[50],inp[50],fTake[50];
    char input1[50];
    strcpy(write,"()");

    ifstream f("dt.txt");
    f>>inp;
    f.close();
    strcat(write,inp);


    yR=ui->lineEdit_4->text();
    mN=ui->lineEdit_5->text();

    syR=yR.toStdString();
    smN=mN.toStdString();

    strcpy(cyR,syR.data());
    strcpy(cmN,smN.data());

    strcat(write,cmN);
    strcat(write,cyR);
    strcat(write,"()");

    ifstream fName("tmp.txt");
    fName>>fTake;
    fName.close();

    strcat(fTake,"Notes.txt");

    ifstream readItForMe(fTake,ios::app);
    ofstream TEMPwrite("writeOn.txt",ios::app);

    string T;
    int mu=0;
    while(!readItForMe.eof())
    {
        mu++;
        readItForMe>>T;
        TEMPwrite<<" "<<T;
        if(mu==150){
            mu=0;
            TEMPwrite<<endl;
        }

    }
    readItForMe.close();
    TEMPwrite.close();

    remove(fTake);

    ofstream F_AGAIN(fTake,ios::app);
    ifstream FFF("writeOn.txt",ios::app);


    int flag=0;
    char uTake[100];
    int io=0;
    while(!FFF.eof())
    {
        FFF>>uTake;
        if(strcmp(uTake,write)==0)flag=1;
        if(flag==0)
        {
        F_AGAIN<<"  "<<uTake;
        }
        if(flag==1 && strcmp(uTake,"(~!~eof)")==0)flag=0;


    }
    F_AGAIN.close();
    FFF.close();
    remove("writeOn.txt");

    QMessageBox bOx;
    bOx.setText("your writing of the selected has been deleted...");
    bOx.exec();



}

void ViewCalender::on_pushButton_10_clicked()
{
    QString INPUT;
    QString yR,mN;
    string syR,smN,sINPUT;
    char cyR[50],cmN[50];
    char write[50],inp[50],fTake[50];
    char input1[50];
    strcpy(write,"()");

    ifstream f("dt.txt");
    f>>inp;
    f.close();
    strcat(write,inp);


    yR=ui->lineEdit_4->text();
    mN=ui->lineEdit_5->text();

    syR=yR.toStdString();
    smN=mN.toStdString();

    strcpy(cyR,syR.data());
    strcpy(cmN,smN.data());

    strcat(write,cmN);
    strcat(write,cyR);
    strcat(write,"()");

    ifstream fName("tmp.txt");
    fName>>fTake;
    fName.close();

    strcat(fTake,"Notes.txt");

    ifstream readItForMe(fTake,ios::app);
    ofstream TEMPwrite("writeOn.txt",ios::app);

    string T;
    int mu=0;
    while(!readItForMe.eof())
    {
        mu++;
        readItForMe>>T;
        TEMPwrite<<" "<<T;
        if(mu==150){
            mu=0;
            TEMPwrite<<endl;
        }

    }
    readItForMe.close();
    TEMPwrite.close();

    remove(fTake);

    ofstream F_AGAIN(fTake,ios::app);
    ifstream FFF("writeOn.txt",ios::app);


    int flag=0;
    char uTake[100];
    int io=0;
    QString TR;
    string sTR;
    while(!FFF.eof())
    {
        FFF>>uTake;
        if(strcmp(uTake,write)==0){
            flag=1;
            TR=ui->textEdit->toPlainText();
            sTR=TR.toStdString();
            ofstream FV("t.txt");
            FV<<sTR;
            FV.close();
            F_AGAIN<<" "<<write<<" ";

            ifstream FVV("t.txt",ios::app);

            string Vg,VVg;
           while(!FVV.eof()){

                stringEnDc X;
               FVV>>Vg;
               VVg=X.encryptIt(Vg);
               char import[500];
               strcpy(import,VVg.data());
               for(int hh=0;hh<strlen(import);hh++)import[hh]=(char)((int)import[hh]+1);
               F_AGAIN<<"  "<<import<<"  ";
            }
           FVV.close();
           remove("t.txt");


            F_AGAIN<<" (~!~eof) ";
        }
        if(flag==0)
        {
        F_AGAIN<<"  "<<uTake;
        }
        if(flag==1 && strcmp(uTake,"(~!~eof)")==0)flag=0;


    }
    F_AGAIN.close();
    FFF.close();
    remove("writeOn.txt");


    QMessageBox bOx;
    bOx.setText("your writing of the selected date has been edited...");
    bOx.exec();


}

void ViewCalender::on_pushButton_13_clicked()
{
    QString INPUT;
    QString yR,mN;
    string syR,smN,sINPUT;
    char cyR[50],cmN[50];
    char write[50][50],inp[50],fTake[50];
    char input1[50];
    int t,contains[35];

    for(t=1;t<=31;t++)
    {
    strcpy(write[t],"()");
    }


    strcat(write[1],"1st");
    strcat(write[2],"2nd");
    strcat(write[3],"3rd");
    strcat(write[4],"4th");
    strcat(write[5],"5th");
    strcat(write[6],"6th");
    strcat(write[7],"7th");
    strcat(write[8],"8th");
    strcat(write[9],"9th");
    strcat(write[10],"10th");
    strcat(write[11],"11th");
    strcat(write[12],"12th");
    strcat(write[13],"13th");
    strcat(write[14],"14th");
    strcat(write[15],"15th");
    strcat(write[16],"16th");
    strcat(write[17],"17th");
    strcat(write[18],"18th");
    strcat(write[19],"19th");
    strcat(write[20],"20th");
    strcat(write[21],"21st");
    strcat(write[22],"22nd");
    strcat(write[23],"23rd");
    strcat(write[24],"24th");
    strcat(write[25],"25th");
    strcat(write[26],"26th");
    strcat(write[27],"27th");
    strcat(write[28],"28th");
    strcat(write[29],"29th");
    strcat(write[30],"30th");
    strcat(write[31],"31st");



    yR=ui->lineEdit_4->text();
    mN=ui->lineEdit_5->text();

    syR=yR.toStdString();
    smN=mN.toStdString();

    strcpy(cyR,syR.data());
    strcpy(cmN,smN.data());
    for(t=1;t<=31;t++)
    {
    strcat(write[t],cmN);
    strcat(write[t],cyR);
    strcat(write[t],"()");
    }

    ifstream fName("tmp.txt");
    fName>>fTake;
    fName.close();

    strcat(fTake,"Notes.txt");

    ifstream readItForMe(fTake,ios::app);
    for(t=1;t<=31;t++)contains[t]=0;

    while(!readItForMe.eof())
    {
        readItForMe>>input1;
        for(t=1;t<=31;t++)
        {
        if(strcmp(input1,write[t])==0)
        {
            contains[t]=1;
        }
    }
    }
    readItForMe.close();
    QPalette* palette1 = new QPalette();
    palette1->setColor(QPalette::ButtonText,Qt::magenta);

    if(contains[1]==1)ui->pushButton->setPalette(*palette1);
    if(contains[2]==1)ui->pushButton_2->setPalette(*palette1);
    if(contains[3]==1)ui->pushButton_3->setPalette(*palette1);
     if(contains[4]==1)ui->pushButton_4->setPalette(*palette1);
     if(contains[5]==1)ui->pushButton_5->setPalette(*palette1);
     if(contains[6]==1)ui->pushButton_6->setPalette(*palette1);
    if(contains[7])ui->pushButton_7->setPalette(*palette1);
      if(contains[8])ui->pushButton_23->setPalette(*palette1);
     if(contains[9])ui->pushButton_24->setPalette(*palette1);
      if(contains[10]==1)ui->pushButton_25->setPalette(*palette1);
     if(contains[11])ui->pushButton_26->setPalette(*palette1);
      if(contains[12])ui->pushButton_27->setPalette(*palette1);
     if(contains[13])ui->pushButton_28->setPalette(*palette1);
     if(contains[14])ui->pushButton_29->setPalette(*palette1);
     if(contains[15])ui->pushButton_30->setPalette(*palette1);
     if(contains[16])ui->pushButton_31->setPalette(*palette1);
     if(contains[17])ui->pushButton_32->setPalette(*palette1);
      if(contains[18])ui->pushButton_33->setPalette(*palette1);
      if(contains[19])ui->pushButton_34->setPalette(*palette1);
     if(contains[20])ui->pushButton_35->setPalette(*palette1);
    if(contains[21])ui->pushButton_36->setPalette(*palette1);
      if(contains[22])ui->pushButton_37->setPalette(*palette1);
      if(contains[23])ui->pushButton_38->setPalette(*palette1);
      if(contains[24])ui->pushButton_39->setPalette(*palette1);
      if(contains[25])ui->pushButton_40->setPalette(*palette1);
      if(contains[26])ui->pushButton_41->setPalette(*palette1);
     if(contains[27])ui->pushButton_42->setPalette(*palette1);
      if(contains[28])ui->pushButton_43->setPalette(*palette1);
     if(contains[29])ui->pushButton_44->setPalette(*palette1);
     if(contains[30])ui->pushButton_45->setPalette(*palette1);
      if(contains[31])ui->pushButton_46->setPalette(*palette1);


}

void ViewCalender::on_pushButton_14_clicked()
{
    digitaldiary D;
    this->hide();
    D.exec();
}
