#ifndef FEATUREPAGE_H
#define FEATUREPAGE_H

#include <QDialog>
#include <QPainter>

namespace Ui {
    class FeaturePage;
}

class FeaturePage : public QDialog {
    Q_OBJECT
public:
    FeaturePage(QWidget *parent = 0);
    ~FeaturePage();

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *e){
            QPainter painter(this);
            QImage image("image/fet.PNG","PNG");
            painter.drawImage(.1,.1,image);
        }

private:
    Ui::FeaturePage *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // FEATUREPAGE_H
