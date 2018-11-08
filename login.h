#ifndef LOGIN_H
#define LOGIN_H
#include <passordigitaldiary.h>
#include <QString>
#include <DTO/logincheck.h>
#include <QMessageBox>
#include <SERVICE/encryptiondecryption.h>
#include <SERVICE/stringendc.h>
#include <iostream>
#include <string>
#include <fstream>
#include <QDialog>
#include <mainwindow.h>
#include <QPainter>
using namespace std;

namespace Ui {
    class login;
}

class login : public QDialog {
    Q_OBJECT
public:
    loginCheck logCheck;

    login(QWidget *parent = 0);
    ~login();

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *e){
            QPainter painter(this);
            QImage image("login.PNG","PNG");
            painter.drawImage(.03,.03,image);
        }

private:
    Ui::login *ui;

     encryptionDecryption r;


private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // LOGIN_H
