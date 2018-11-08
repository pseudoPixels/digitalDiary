#ifndef DIGITALDIARY_H
#define DIGITALDIARY_H
#include <addressbook.h>
#include <addataddressbook.h>
#include <viewcalender.h>
#include <passordigitaldiary.h>
#include <QDialog>
#include <QPainter>
using namespace std;


namespace Ui {
    class digitaldiary;
}

class digitaldiary : public QDialog {
    Q_OBJECT
public:
    digitaldiary(QWidget *parent = 0);
    ~digitaldiary();

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *e){
            QPainter painter(this);
            QImage image("image/12.PNG","PNG");
            painter.drawImage(.1,.1,image);
        }

private:
    Ui::digitaldiary *ui;

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // DIGITALDIARY_H
