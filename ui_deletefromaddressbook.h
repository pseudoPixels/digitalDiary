/********************************************************************************
** Form generated from reading UI file 'deletefromaddressbook.ui'
**
** Created: Sun Apr 15 21:42:26 2012
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEFROMADDRESSBOOK_H
#define UI_DELETEFROMADDRESSBOOK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DeleteFromAddressBook
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;

    void setupUi(QDialog *DeleteFromAddressBook)
    {
        if (DeleteFromAddressBook->objectName().isEmpty())
            DeleteFromAddressBook->setObjectName(QString::fromUtf8("DeleteFromAddressBook"));
        DeleteFromAddressBook->resize(580, 498);
        label = new QLabel(DeleteFromAddressBook);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 30, 461, 61));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        groupBox = new QGroupBox(DeleteFromAddressBook);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 110, 481, 311));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 230, 121, 31));
        QPalette palette;
        QBrush brush(QColor(0, 85, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pushButton->setPalette(palette);
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(50, 20, 261, 181));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        textEdit->setFont(font2);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 60, 91, 31));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        pushButton_2->setFont(font3);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(340, 20, 91, 31));
        QFont font4;
        font4.setPointSize(14);
        lineEdit->setFont(font4);
        pushButton_3 = new QPushButton(DeleteFromAddressBook);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(190, 440, 131, 31));
        QPalette palette1;
        QBrush brush2(QColor(170, 85, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pushButton_3->setPalette(palette1);
        pushButton_3->setFont(font3);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(DeleteFromAddressBook);

        QMetaObject::connectSlotsByName(DeleteFromAddressBook);
    } // setupUi

    void retranslateUi(QDialog *DeleteFromAddressBook)
    {
        DeleteFromAddressBook->setWindowTitle(QApplication::translate("DeleteFromAddressBook", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DeleteFromAddressBook", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:20pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">Please Select The Serial Number</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        pushButton->setText(QApplication::translate("DeleteFromAddressBook", "show my list", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("DeleteFromAddressBook", "DELETE", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("DeleteFromAddressBook", "Back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DeleteFromAddressBook: public Ui_DeleteFromAddressBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEFROMADDRESSBOOK_H
