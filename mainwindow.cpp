#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::on_pushButton_clicked()
{
    createAnAccount A;
    A.exec();

}

void MainWindow::on_pushButton_2_clicked()
{
    login l;

    l.exec();
}

void MainWindow::on_MainWindow_iconSizeChanged(QSize iconSize)
{

}

void MainWindow::on_pushButton_4_clicked()
{
    exit(1);
}

void MainWindow::on_pushButton_6_clicked()
{
    developersPage DP;
    DP.exec();
}

void MainWindow::on_pushButton_5_clicked()
{
    FeaturePage FP;
    FP.exec();
}
