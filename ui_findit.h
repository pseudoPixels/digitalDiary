/********************************************************************************
** Form generated from reading UI file 'findit.ui'
**
** Created: Sun Apr 15 23:01:49 2012
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDIT_H
#define UI_FINDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_findIt
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget;

    void setupUi(QDialog *findIt)
    {
        if (findIt->objectName().isEmpty())
            findIt->setObjectName(QString::fromUtf8("findIt"));
        findIt->resize(594, 521);
        label = new QLabel(findIt);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 10, 551, 121));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(findIt);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 130, 91, 16));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        lineEdit = new QLineEdit(findIt);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(230, 130, 131, 21));
        pushButton = new QPushButton(findIt);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(420, 130, 75, 21));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        pushButton->setFont(font2);
        pushButton_2 = new QPushButton(findIt);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 470, 111, 31));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setWeight(50);
        pushButton_2->setFont(font3);
        tableWidget = new QTableWidget(findIt);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(120, 200, 351, 231));
        tableWidget->setFont(font2);

        retranslateUi(findIt);

        QMetaObject::connectSlotsByName(findIt);
    } // setupUi

    void retranslateUi(QDialog *findIt)
    {
        findIt->setWindowTitle(QApplication::translate("findIt", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("findIt", "Please Enter The Webname", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("findIt", "Webname", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("findIt", "search", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("findIt", "Back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class findIt: public Ui_findIt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDIT_H
