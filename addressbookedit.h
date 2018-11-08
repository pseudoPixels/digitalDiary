#ifndef ADDRESSBOOKEDIT_H
#define ADDRESSBOOKEDIT_H
#include <addressbook.h>
#include <QDialog>
#include <QString>
#include <iostream>
#include <fstream>
#include <SERVICE/stringendc.h>
#include <QMessageBox>
#include <string.h>
#include <QPainter>
using namespace std;



namespace Ui {
    class addressbookEdit;
}

class addressbookEdit : public QDialog {
    Q_OBJECT
public:
    addressbookEdit(QWidget *parent = 0);
    ~addressbookEdit();
    char ar[50];
    char item[500][5][50];
    int i;
    int serial;

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *e){
            QPainter painter(this);
            QImage image("image/pass.PNG","PNG");
            painter.drawImage(.1,.1,image);
        }

private:
    Ui::addressbookEdit *ui;

private slots:
    void on_pushButton_4_clicked();
    void on_dateTimeEdit_editingFinished();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // ADDRESSBOOKEDIT_H
