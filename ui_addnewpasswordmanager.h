/********************************************************************************
** Form generated from reading UI file 'addnewpasswordmanager.ui'
**
** Created: Sun Apr 15 20:18:54 2012
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWPASSWORDMANAGER_H
#define UI_ADDNEWPASSWORDMANAGER_H

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

QT_BEGIN_NAMESPACE

class Ui_addNewPasswordManager
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;

    void setupUi(QDialog *addNewPasswordManager)
    {
        if (addNewPasswordManager->objectName().isEmpty())
            addNewPasswordManager->setObjectName(QString::fromUtf8("addNewPasswordManager"));
        addNewPasswordManager->resize(627, 386);
        pushButton = new QPushButton(addNewPasswordManager);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 320, 101, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(addNewPasswordManager);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 320, 81, 31));
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox = new QGroupBox(addNewPasswordManager);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 60, 561, 221));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 10, 331, 31));
        QFont font1;
        font1.setPointSize(11);
        lineEdit->setFont(font1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 131, 16));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 60, 331, 31));
        lineEdit_2->setFont(font1);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 60, 151, 31));
        label_3->setFont(font2);
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(190, 110, 331, 31));
        lineEdit_3->setFont(font1);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 120, 151, 20));
        label_4->setFont(font2);

        retranslateUi(addNewPasswordManager);

        QMetaObject::connectSlotsByName(addNewPasswordManager);
    } // setupUi

    void retranslateUi(QDialog *addNewPasswordManager)
    {
        addNewPasswordManager->setWindowTitle(QApplication::translate("addNewPasswordManager", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("addNewPasswordManager", "BACK", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("addNewPasswordManager", "SAVE", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        label_2->setText(QApplication::translate("addNewPasswordManager", "WEBNAME", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("addNewPasswordManager", "USERNAME", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("addNewPasswordManager", "PASSWORD", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addNewPasswordManager: public Ui_addNewPasswordManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWPASSWORDMANAGER_H
