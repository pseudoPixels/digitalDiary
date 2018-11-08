#ifndef DELETEFROMADDRESSBOOK_H
#define DELETEFROMADDRESSBOOK_H
#include <fstream>
#include <QString>
#include <iostream>
#include <QMessageBox>
#include <SERVICE/stringendc.h>
#include <string>
#include <addressbook.h>
#include <QPainter>

#include <QDialog>
using namespace std;


namespace Ui {
    class DeleteFromAddressBook;
}

class DeleteFromAddressBook : public QDialog {
    Q_OBJECT
public:
    char item[100][6][50],ar1[50],ar2[50],ar3[50],ar4[50];
    int i;
    int serial;
    char file[50];
    DeleteFromAddressBook(QWidget *parent = 0);
    ~DeleteFromAddressBook();

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *e){
            QPainter painter(this);
            QImage image("image/pass.PNG","PNG");
            painter.drawImage(.1,.1,image);
        }

private:
    Ui::DeleteFromAddressBook *ui;

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // DELETEFROMADDRESSBOOK_H
