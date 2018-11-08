/********************************************************************************
** Form generated from reading UI file 'passwordmanagerhome.ui'
**
** Created: Sun Apr 15 21:46:56 2012
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDMANAGERHOME_H
#define UI_PASSWORDMANAGERHOME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_passwordManagerHome
{
public:
    QLabel *label;
    QPushButton *pushButton_5;
    QGroupBox *groupBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton;

    void setupUi(QDialog *passwordManagerHome)
    {
        if (passwordManagerHome->objectName().isEmpty())
            passwordManagerHome->setObjectName(QString::fromUtf8("passwordManagerHome"));
        passwordManagerHome->resize(641, 511);
        label = new QLabel(passwordManagerHome);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 55, 471, 51));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pushButton_5 = new QPushButton(passwordManagerHome);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(240, 460, 101, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton_5->setFont(font1);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox = new QGroupBox(passwordManagerHome);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(120, 130, 361, 311));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 80, 201, 41));
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 130, 201, 41));
        pushButton_3->setFont(font1);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(70, 190, 201, 41));
        pushButton_4->setFont(font1);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(70, 250, 201, 41));
        pushButton_6->setFont(font1);
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 20, 201, 41));
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(passwordManagerHome);

        QMetaObject::connectSlotsByName(passwordManagerHome);
    } // setupUi

    void retranslateUi(QDialog *passwordManagerHome)
    {
        passwordManagerHome->setWindowTitle(QApplication::translate("passwordManagerHome", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("passwordManagerHome", "Welcome To Password Manager...", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("passwordManagerHome", "Back", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        pushButton_2->setText(QApplication::translate("passwordManagerHome", "View All", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("passwordManagerHome", "Search", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("passwordManagerHome", "Delete", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("passwordManagerHome", "Edit", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("passwordManagerHome", "Add New Item", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class passwordManagerHome: public Ui_passwordManagerHome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDMANAGERHOME_H
