#ifndef EDITIT_H
#define EDITIT_H
#include <fstream>
#include <iostream>
#include <QString>
#include <SERVICE/stringendc.h>
#include <QMessageBox>
#include <QDialog>
#include <passwordmanagerhome.h>
using namespace std;

namespace Ui {
    class EditIt;
}

class EditIt : public QDialog {
    Q_OBJECT
public:
    char ar1[50],ar2[50],ar3[50],item[500][5][50];
    int i,j,k;
    char ar[50];
    int serial;

    EditIt(QWidget *parent = 0);
    ~EditIt();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::EditIt *ui;

private slots:
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // EDITIT_H
