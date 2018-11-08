#ifndef CREATEANACCOUNT_H
#define CREATEANACCOUNT_H
#include <fstream>
#include <iostream>
#include <string>
#include <QDialog>
#include <QString>
#include <DTO/usernamedto.h>
#include <SERVICE/encryptiondecryption.h>
#include <QPainter>
using namespace std;

namespace Ui {
    class createAnAccount;
}

class createAnAccount : public QDialog {
    Q_OBJECT
public:
    createAnAccount(QWidget *parent = 0);
    ~createAnAccount();

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *e){
          QPainter painter(this);
          QImage image("create.PNG","PNG");
          painter.drawImage(.03,.03,image);
      }

private:
    Ui::createAnAccount *ui;
     userNameDto D;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // CREATEANACCOUNT_H
