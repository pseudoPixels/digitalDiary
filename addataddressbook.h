#ifndef ADDATADDRESSBOOK_H
#define ADDATADDRESSBOOK_H
#include <QPainter>
#include <QMessageBox>
#include <QDialog>
#include <QString>
#include <DTO/edit_addressbook.h>
#include <addressbook.h>
using namespace std;


namespace Ui {
    class addataddressbook;
}

class addataddressbook : public QDialog {
    Q_OBJECT
public:
    addataddressbook(QWidget *parent = 0);
    ~addataddressbook();

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *e){
            QPainter painter(this);
            QImage image("image/pass.PNG","PNG");
            painter.drawImage(.03,.03,image);
        }

private:
    Ui::addataddressbook *ui;

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // ADDATADDRESSBOOK_H
