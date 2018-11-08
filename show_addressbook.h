#ifndef SHOW_ADDRESSBOOK_H
#define SHOW_ADDRESSBOOK_H
#include <addressbook.h>
#include <SERVICE/stringendc.h>
#include <QDialog>
#include <QString>
#include <string>
#include <iostream>
#include <fstream>
#include <QPainter>
using namespace std;


namespace Ui {
    class show_addressbook;
}

class show_addressbook : public QDialog {
    Q_OBJECT
public:
    show_addressbook(QWidget *parent = 0);
    ~show_addressbook();

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *e){
            QPainter painter(this);
            QImage image("image/pass.PNG","PNG");
            painter.drawImage(.1,.1,image);
        }

private:
    Ui::show_addressbook *ui;

private slots:


private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // SHOW_ADDRESSBOOK_H
