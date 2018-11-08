#ifndef SEARCH_H
#define SEARCH_H
#include <passwordmanagerhome.h>
#include <QPainter>

#include <QDialog>

namespace Ui {
    class search;
}

class search : public QDialog {
    Q_OBJECT
public:
    search(QWidget *parent = 0);
    ~search();

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *e){
        QPainter painter(this);
        QImage image("1st.PNG","PNG");
        painter.drawImage(.03,.03,image);
    }

private:
    Ui::search *ui;

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // SEARCH_H
