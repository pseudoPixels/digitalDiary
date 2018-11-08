#ifndef VIEWCALENDER_H
#define VIEWCALENDER_H
#include <DTO/getfirstdayofmonth.h>
#include <DTO/didiwroteanything.h>
#include <SERVICE/stringendc.h>
#include <QDialog>
#include <iostream>
#include <cstdio>
#include <time.h>
#include <string>
#include <QMessageBox>
#include <fstream>
#include <ctime>
#include <digitaldiary.h>
#include <QPainter>
using namespace std;

namespace Ui {
    class ViewCalender;
}

class ViewCalender : public QDialog {
    Q_OBJECT
public:
    ViewCalender(QWidget *parent = 0);

    ~ViewCalender();
    int Ty,Tm;
    int year,month,day;







protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *e){
            QPainter painter(this);
            QImage image("image/121.PNG","PNG");
            painter.drawImage(.1,.1,image);
        }

private:
    Ui::ViewCalender *ui;

private slots:
    void on_pushButton_14_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_46_clicked();
    void on_pushButton_45_clicked();
    void on_pushButton_44_clicked();
    void on_pushButton_43_clicked();
    void on_pushButton_42_clicked();
    void on_pushButton_41_clicked();
    void on_pushButton_40_clicked();
    void on_pushButton_39_clicked();
    void on_pushButton_38_clicked();
    void on_pushButton_37_clicked();
    void on_pushButton_36_clicked();
    void on_pushButton_35_clicked();
    void on_pushButton_34_clicked();
    void on_pushButton_33_clicked();
    void on_pushButton_32_clicked();
    void on_pushButton_31_clicked();
    void on_pushButton_30_clicked();
    void on_pushButton_29_clicked();
    void on_pushButton_28_clicked();
    void on_pushButton_27_clicked();
    void on_pushButton_26_clicked();
    void on_pushButton_25_clicked();
    void on_pushButton_24_clicked();
    void on_pushButton_23_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_pushButton_49_clicked();
    void on_pushButton_50_clicked();
    void on_pushButton_48_clicked();
    void on_pushButton_47_clicked();
    void on_pushButton_8_clicked();
};

#endif // VIEWCALENDER_H
