#include "featurepage.h"
#include "ui_featurepage.h"

FeaturePage::FeaturePage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FeaturePage)
{
    ui->setupUi(this);
}

FeaturePage::~FeaturePage()
{
    delete ui;
}

void FeaturePage::changeEvent(QEvent *e)
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

void FeaturePage::on_pushButton_clicked()
{
    this->close();
}
