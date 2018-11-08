#ifndef ADDNEWPASSWORDMANAGER_H
#define ADDNEWPASSWORDMANAGER_H
#include <SERVICE/stringendc.h>
#include <DTO/logincheck.h>
#include <login.h>
#include <iostream>
#include <fstream>
#include <passwordmanagerhome.h>
#include <QPainter>
using namespace std;

#include <QDialog>

namespace Ui {
    class addNewPasswordManager;
}

class addNewPasswordManager : public QDialog {
    Q_OBJECT
public:
    addNewPasswordManager(QWidget *parent = 0);
    ~addNewPasswordManager();
    loginCheck l;
   void setIt(loginCheck l)
   {
       this->l=l;

   }



protected:
    void changeEvent(QEvent *e);


private:
    Ui::addNewPasswordManager *ui;


private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();


};

#endif // ADDNEWPASSWORDMANAGER_H
