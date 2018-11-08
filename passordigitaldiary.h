#ifndef PASSORDIGITALDIARY_H
#define PASSORDIGITALDIARY_H
#include <passwordManagerHome.h>
#include <digitaldiary.h>
#include <login.h>
#include <QPainter>

#include <QDialog>

namespace Ui {
    class passOrDigitalDiary;
}

class passOrDigitalDiary : public QDialog {
    Q_OBJECT
public:
    passOrDigitalDiary(QWidget *parent = 0);
    ~passOrDigitalDiary();

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *e){
            QPainter painter(this);
            QImage image("image/52.PNG","PNG");
            painter.drawImage(.1,.1,image);
        }

private:
    Ui::passOrDigitalDiary *ui;

private slots:
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // PASSORDIGITALDIARY_H
