#include "developerspage.h"
#include "ui_developerspage.h"

developersPage::developersPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::developersPage)
{
    ui->setupUi(this);
}

developersPage::~developersPage()
{
    delete ui;
}

void developersPage::changeEvent(QEvent *e)
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

void developersPage::on_pushButton_clicked()
{
    this->close();
}
