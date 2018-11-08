/********************************************************************************
** Form generated from reading UI file 'viewallpasswordmanager.ui'
**
** Created: Sun Apr 15 22:32:52 2012
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWALLPASSWORDMANAGER_H
#define UI_VIEWALLPASSWORDMANAGER_H

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

class Ui_viewAllPasswordManager
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *viewAllPasswordManager)
    {
        if (viewAllPasswordManager->objectName().isEmpty())
            viewAllPasswordManager->setObjectName(QString::fromUtf8("viewAllPasswordManager"));
        viewAllPasswordManager->resize(515, 508);
        viewAllPasswordManager->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(viewAllPasswordManager);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 60, 471, 51));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        tableWidget = new QTableWidget(viewAllPasswordManager);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(50, 130, 321, 271));
        QFont font1;
        font1.setPointSize(12);
        tableWidget->setFont(font1);
        tableWidget->setAutoFillBackground(true);
        pushButton = new QPushButton(viewAllPasswordManager);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 430, 71, 23));
        QFont font2;
        font2.setPointSize(14);
        pushButton->setFont(font2);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setFocusPolicy(Qt::StrongFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8("E:/Icon pakage/ALL ICONS pack limewire/Videoplayer.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        retranslateUi(viewAllPasswordManager);

        QMetaObject::connectSlotsByName(viewAllPasswordManager);
    } // setupUi

    void retranslateUi(QDialog *viewAllPasswordManager)
    {
        viewAllPasswordManager->setWindowTitle(QApplication::translate("viewAllPasswordManager", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("viewAllPasswordManager", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:16pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:400; text-decoration: underline; color:#005500;\">Your Saved Items:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("viewAllPasswordManager", "Back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class viewAllPasswordManager: public Ui_viewAllPasswordManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWALLPASSWORDMANAGER_H
