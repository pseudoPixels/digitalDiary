/********************************************************************************
** Form generated from reading UI file 'deleteit.ui'
**
** Created: Sun Apr 15 21:42:25 2012
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEIT_H
#define UI_DELETEIT_H

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

class Ui_DeleteIt
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *DeleteIt)
    {
        if (DeleteIt->objectName().isEmpty())
            DeleteIt->setObjectName(QString::fromUtf8("DeleteIt"));
        DeleteIt->resize(545, 526);
        groupBox = new QGroupBox(DeleteIt);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 90, 471, 371));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 300, 151, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 60, 331, 211));
        QFont font1;
        font1.setPointSize(16);
        textEdit->setFont(font1);
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(370, 90, 71, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        lineEdit_2->setFont(font2);
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(370, 150, 75, 31));
        pushButton_3->setFont(font);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton = new QPushButton(DeleteIt);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 480, 161, 31));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(DeleteIt);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 10, 461, 61));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);

        retranslateUi(DeleteIt);

        QMetaObject::connectSlotsByName(DeleteIt);
    } // setupUi

    void retranslateUi(QDialog *DeleteIt)
    {
        DeleteIt->setWindowTitle(QApplication::translate("DeleteIt", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        pushButton_2->setText(QApplication::translate("DeleteIt", "Show my List", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("DeleteIt", "DELETE", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DeleteIt", "Back", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DeleteIt", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:20pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">Please Select The Serial Number</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DeleteIt: public Ui_DeleteIt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEIT_H
