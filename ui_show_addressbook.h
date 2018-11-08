/********************************************************************************
** Form generated from reading UI file 'show_addressbook.ui'
**
** Created: Sun Apr 15 21:42:25 2012
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_ADDRESSBOOK_H
#define UI_SHOW_ADDRESSBOOK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_show_addressbook
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *show_addressbook)
    {
        if (show_addressbook->objectName().isEmpty())
            show_addressbook->setObjectName(QString::fromUtf8("show_addressbook"));
        show_addressbook->resize(506, 504);
        label = new QLabel(show_addressbook);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 20, 431, 81));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        tableWidget = new QTableWidget(show_addressbook);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(60, 110, 361, 271));
        pushButton = new QPushButton(show_addressbook);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(320, 430, 91, 23));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Copperplate Gothic Light"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8("E:/Icon pakage/128 x 128/Athena 128p/Contact-Black.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton_2 = new QPushButton(show_addressbook);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 430, 81, 21));
        QPalette palette;
        QBrush brush(QColor(0, 85, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pushButton_2->setPalette(palette);
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        pushButton_2->setFont(font2);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(show_addressbook);

        QMetaObject::connectSlotsByName(show_addressbook);
    } // setupUi

    void retranslateUi(QDialog *show_addressbook)
    {
        show_addressbook->setWindowTitle(QApplication::translate("show_addressbook", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("show_addressbook", "DATA SHOW", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("show_addressbook", "close", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("show_addressbook", "Back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class show_addressbook: public Ui_show_addressbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_ADDRESSBOOK_H
