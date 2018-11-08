#include "search.h"
#include "ui_search.h"

search::search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::search)
{
    ui->setupUi(this);
}

search::~search()
{
    delete ui;
}

void search::changeEvent(QEvent *e)
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

void search::on_pushButton_clicked()
{

}

void search::on_pushButton_2_clicked()
{
    passwordManagerHome P;
    this->hide();
    P.exec();
}
