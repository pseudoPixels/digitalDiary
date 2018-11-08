#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <createanaccount.h>
#include <login.h>
#include <QMainWindow>
#include <developerspage.h>
#include <DTO/usernamedto.h>
#include <QPainter>
#include <featurepage.h>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *e){
            QPainter painter(this);
            QImage image("main.PNG","PNG");
            painter.drawImage(.1,.1,image);
        }
private:
    Ui::MainWindow *ui;

private slots:
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_4_clicked();
    void on_MainWindow_iconSizeChanged(QSize iconSize);
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
