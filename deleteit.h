#ifndef DELETEIT_H
#define DELETEIT_H
#include <iostream>
#include <fstream>
#include <SERVICE/stringendc.h>
#include <QString>
#include <string>
#include <QDialog>
#include <QMessageBox>
#include <passwordmanagerhome.h>
using namespace std;

namespace Ui {
    class DeleteIt;
}

class DeleteIt : public QDialog {
    Q_OBJECT
public:
    DeleteIt(QWidget *parent = 0);
    ~DeleteIt();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::DeleteIt *ui;
    QString Q,P,R;
    char file[50],info[100][4][50];
    string s,t,r;
    int i;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
};

#endif // DELETEIT_H
