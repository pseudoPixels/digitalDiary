#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H
#include <deletefromaddressbook.h>
#include <digitaldiary.h>

#include <QDialog>
#include <addataddressbook.h>
#include <show_addressbook.h>
#include <addressbookedit.h>
#include <QPainter>
using namespace std;

namespace Ui {
    class addressbook;
}

class addressbook : public QDialog {
    Q_OBJECT
public:
    addressbook(QWidget *parent = 0);
    ~addressbook();

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *e){
            QPainter painter(this);
            QImage image("image/pass.PNG","PNG");
            painter.drawImage(.1,.1,image);
        }

private:
    Ui::addressbook *ui;

private slots:
    void on_pushButton_5_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
};

#endif // ADDRESSBOOK_H
