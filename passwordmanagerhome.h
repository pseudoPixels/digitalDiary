#ifndef PASSWORDMANAGERHOME_H
#define PASSWORDMANAGERHOME_H
#include <addnewpasswordmanager.h>
#include <viewallpasswordmanager.h>
#include <search.h>
#include <QDialog>
#include <findit.h>
#include <editit.h>
#include <iostream>
#include <deleteit.h>
#include <passordigitaldiary.h>
#include <QPainter>
using namespace std;


namespace Ui {
    class passwordManagerHome;
}

class passwordManagerHome : public QDialog {
    Q_OBJECT
public:
    passwordManagerHome(QWidget *parent = 0);
    ~passwordManagerHome();

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *e){
            QPainter painter(this);
            QImage image("image/fet2.PNG","PNG");
            painter.drawImage(.1,.1,image);
        }

private:
    Ui::passwordManagerHome *ui;

private slots:
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // PASSWORDMANAGERHOME_H
