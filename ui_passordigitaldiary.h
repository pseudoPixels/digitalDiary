/********************************************************************************
** Form generated from reading UI file 'passordigitaldiary.ui'
**
** Created: Sun Apr 15 22:19:43 2012
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSORDIGITALDIARY_H
#define UI_PASSORDIGITALDIARY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_passOrDigitalDiary
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *passOrDigitalDiary)
    {
        if (passOrDigitalDiary->objectName().isEmpty())
            passOrDigitalDiary->setObjectName(QString::fromUtf8("passOrDigitalDiary"));
        passOrDigitalDiary->resize(654, 484);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        passOrDigitalDiary->setPalette(palette);
        label = new QLabel(passOrDigitalDiary);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 60, 471, 61));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pushButton = new QPushButton(passOrDigitalDiary);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 210, 231, 41));
        QPalette palette1;
        QBrush brush2(QColor(0, 85, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(170, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pushButton->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setAutoExclusive(false);
        pushButton->setDefault(true);
        pushButton->setFlat(false);
        pushButton_2 = new QPushButton(passOrDigitalDiary);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 290, 231, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pushButton_2->setPalette(palette2);
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_2->setFont(font2);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setDefault(true);
        pushButton_3 = new QPushButton(passOrDigitalDiary);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 440, 75, 31));
        pushButton_4 = new QPushButton(passOrDigitalDiary);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(470, 440, 75, 31));

        retranslateUi(passOrDigitalDiary);

        QMetaObject::connectSlotsByName(passOrDigitalDiary);
    } // setupUi

    void retranslateUi(QDialog *passOrDigitalDiary)
    {
        passOrDigitalDiary->setWindowTitle(QApplication::translate("passOrDigitalDiary", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("passOrDigitalDiary", "Choose What you want to Explore...", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("passOrDigitalDiary", "Password Manager", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("passOrDigitalDiary", "Encoded Digital Diary", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("passOrDigitalDiary", "Exit", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("passOrDigitalDiary", "Log out", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class passOrDigitalDiary: public Ui_passOrDigitalDiary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSORDIGITALDIARY_H
