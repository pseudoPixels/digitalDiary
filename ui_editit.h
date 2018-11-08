/********************************************************************************
** Form generated from reading UI file 'editit.ui'
**
** Created: Sun Apr 15 21:42:26 2012
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITIT_H
#define UI_EDITIT_H

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

class Ui_EditIt
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QProgressBar *progressBar;
    QPushButton *pushButton_4;
    QLabel *label;

    void setupUi(QDialog *EditIt)
    {
        if (EditIt->objectName().isEmpty())
            EditIt->setObjectName(QString::fromUtf8("EditIt"));
        EditIt->resize(698, 486);
        groupBox = new QGroupBox(EditIt);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 70, 351, 351));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 300, 121, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 241, 271));
        QFont font1;
        font1.setPointSize(13);
        textEdit->setFont(font1);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 100, 75, 23));
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(260, 50, 81, 31));
        QFont font2;
        font2.setPointSize(12);
        lineEdit->setFont(font2);
        groupBox_2 = new QGroupBox(EditIt);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(430, 70, 231, 361));
        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 40, 113, 20));
        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(110, 100, 113, 20));
        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(110, 170, 113, 20));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 300, 75, 23));
        pushButton_3->setFont(font);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 40, 81, 16));
        label_2->setFont(font2);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 100, 81, 16));
        label_3->setFont(font2);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 170, 81, 16));
        label_4->setFont(font1);
        progressBar = new QProgressBar(groupBox_2);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(20, 220, 241, 23));
        QFont font3;
        font3.setKerning(true);
        progressBar->setFont(font3);
        progressBar->setValue(24);
        pushButton_4 = new QPushButton(EditIt);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(140, 440, 75, 31));
        pushButton_4->setFont(font);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(EditIt);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 0, 461, 61));
        QFont font4;
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setWeight(75);
        label->setFont(font4);

        retranslateUi(EditIt);

        QMetaObject::connectSlotsByName(EditIt);
    } // setupUi

    void retranslateUi(QDialog *EditIt)
    {
        EditIt->setWindowTitle(QApplication::translate("EditIt", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        pushButton->setText(QApplication::translate("EditIt", "show my list", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("EditIt", "select", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        pushButton_3->setText(QApplication::translate("EditIt", "Edit", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("EditIt", "Webname", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("EditIt", "UserName", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("EditIt", "Password", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("EditIt", "Back", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("EditIt", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:20pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">Please Select The Serial Number</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditIt: public Ui_EditIt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITIT_H
