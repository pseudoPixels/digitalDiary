#ifndef VIEWALLPASSWORDMANAGER_H
#define VIEWALLPASSWORDMANAGER_H
#include <SERVICE/stringendc.h>
#include <iostream>
#include <fstream>
#include <QString>
#include <string>
#include <QDialog>
#include <QMessageBox>
#include <passwordmanagerhome.h>
using namespace std;

namespace Ui {
    class viewAllPasswordManager;
}

class viewAllPasswordManager : public QDialog {
    Q_OBJECT
public:
    viewAllPasswordManager(QWidget *parent = 0);
    ~viewAllPasswordManager();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::viewAllPasswordManager *ui;

private slots:


private slots:
    //void on_tableWidget_activated(QModelIndex index);
    void on_pushButton_clicked();
};

#endif // VIEWALLPASSWORDMANAGER_H
