/********************************************************************************
** Form generated from reading UI file 'addressbookedit.ui'
**
** Created: Sun Apr 15 23:11:39 2012
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOKEDIT_H
#define UI_ADDRESSBOOKEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addressbookEdit
{
public:
    QProgressBar *progressBar;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;

    void setupUi(QDialog *addressbookEdit)
    {
        if (addressbookEdit->objectName().isEmpty())
            addressbookEdit->setObjectName(QString::fromUtf8("addressbookEdit"));
        addressbookEdit->resize(665, 546);
        progressBar = new QProgressBar(addressbookEdit);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(480, 370, 171, 21));
        QFont font;
        font.setPointSize(12);
        progressBar->setFont(font);
        progressBar->setValue(24);
        lineEdit_2 = new QLineEdit(addressbookEdit);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(480, 130, 161, 21));
        lineEdit_3 = new QLineEdit(addressbookEdit);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(480, 190, 161, 21));
        lineEdit_4 = new QLineEdit(addressbookEdit);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(480, 240, 161, 21));
        lineEdit_5 = new QLineEdit(addressbookEdit);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(480, 300, 161, 21));
        pushButton_3 = new QPushButton(addressbookEdit);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(490, 420, 75, 23));
        pushButton_3->setFont(font);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(addressbookEdit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(410, 130, 46, 13));
        label->setFont(font);
        label_2 = new QLabel(addressbookEdit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(410, 180, 46, 31));
        label_2->setFont(font);
        label_3 = new QLabel(addressbookEdit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(410, 240, 61, 20));
        label_3->setFont(font);
        label_4 = new QLabel(addressbookEdit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(410, 300, 46, 13));
        label_4->setFont(font);
        groupBox = new QGroupBox(addressbookEdit);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 50, 331, 441));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 50, 251, 331));
        QFont font1;
        font1.setPointSize(14);
        textEdit->setFont(font1);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 20, 101, 23));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 390, 113, 20));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 400, 75, 23));
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4 = new QPushButton(addressbookEdit);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 510, 75, 31));
        QPalette palette;
        QBrush brush(QColor(85, 170, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pushButton_4->setPalette(palette);
        QFont font2;
        font2.setPointSize(17);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_4->setFont(font2);

        retranslateUi(addressbookEdit);

        QMetaObject::connectSlotsByName(addressbookEdit);
    } // setupUi

    void retranslateUi(QDialog *addressbookEdit)
    {
        addressbookEdit->setWindowTitle(QApplication::translate("addressbookEdit", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("addressbookEdit", "Save", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("addressbookEdit", "Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("addressbookEdit", "Phone", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("addressbookEdit", "Address", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("addressbookEdit", "Email", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        pushButton->setText(QApplication::translate("addressbookEdit", "Show List", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("addressbookEdit", "Select", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("addressbookEdit", "Back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addressbookEdit: public Ui_addressbookEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOKEDIT_H
