#include "digitaldiary.h"
#include "ui_digitaldiary.h"

digitaldiary::digitaldiary(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::digitaldiary)
{
    ui->setupUi(this);
}

digitaldiary::~digitaldiary()
{
    delete ui;
}

void digitaldiary::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void digitaldiary::on_pushButton_clicked()
{
    addressbook ab;
    this->hide();
    ab.exec();
}

void digitaldiary::on_pushButton_2_clicked()
{
    ViewCalender V;
    this->hide();
    V.exec();
}

void digitaldiary::on_pushButton_3_clicked()
{
    passOrDigitalDiary PD;
    this->hide();
    PD.exec();
}
