#include "passordigitaldiary.h"
#include "ui_passordigitaldiary.h"

passOrDigitalDiary::passOrDigitalDiary(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::passOrDigitalDiary)
{
    ui->setupUi(this);
}

passOrDigitalDiary::~passOrDigitalDiary()
{
    delete ui;
}

void passOrDigitalDiary::changeEvent(QEvent *e)
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

void passOrDigitalDiary::on_pushButton_clicked()
{
    passwordManagerHome pH;
    this->hide();
    pH.exec();
}

void passOrDigitalDiary::on_pushButton_2_clicked()
{
    digitaldiary d;
    this->hide();
    d.exec();
}

void passOrDigitalDiary::on_pushButton_3_clicked()
{
    exit(1);

}

void passOrDigitalDiary::on_pushButton_4_clicked()
{
    login L;
    this->close();
    L.exec();
}
