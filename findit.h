#ifndef FINDIT_H
#define FINDIT_H
#include <iostream>
#include <QString>
#include <fstream>
#include <string>
#include <SERVICE/stringendc.h>
#include <passwordmanagerhome.h>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QWidget>
#include <vector>
#include <QWidgetItem>

#include <QDialog>
using namespace std;

namespace Ui {
    class findIt;
}

class findIt : public QDialog {
    Q_OBJECT
public:
    findIt(QWidget *parent = 0);
    ~findIt();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::findIt *ui;

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // FINDIT_H
