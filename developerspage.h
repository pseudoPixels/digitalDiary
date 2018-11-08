#ifndef DEVELOPERSPAGE_H
#define DEVELOPERSPAGE_H
#include <QPainter>

#include <QDialog>

namespace Ui {
    class developersPage;
}

class developersPage : public QDialog {
    Q_OBJECT
public:
    developersPage(QWidget *parent = 0);
    ~developersPage();

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *e){
            QPainter painter(this);
            QImage image("image/160.PNG","PNG");
            painter.drawImage(.1,.1,image);
        }

private:
    Ui::developersPage *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // DEVELOPERSPAGE_H
