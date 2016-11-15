/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTextEdit *textEdit;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton_close;
    QPushButton *pushButton_send;
    QLabel *label;
    QLineEdit *lineEdit_IP;
    QLabel *label_2;
    QLabel *label_back;
    QLabel *label_3;
    QLineEdit *lineEdit_name;
    QPushButton *pushButton_sendFile;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(390, 330);
        textEdit = new QTextEdit(Dialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 241, 211));
        comboBox = new QComboBox(Dialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(12, 225, 61, 24));
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 250, 241, 31));
        pushButton_close = new QPushButton(Dialog);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(140, 290, 51, 26));
        pushButton_send = new QPushButton(Dialog);
        pushButton_send->setObjectName(QString::fromUtf8("pushButton_send"));
        pushButton_send->setGeometry(QRect(200, 290, 51, 26));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 10, 71, 31));
        lineEdit_IP = new QLineEdit(Dialog);
        lineEdit_IP->setObjectName(QString::fromUtf8("lineEdit_IP"));
        lineEdit_IP->setGeometry(QRect(260, 80, 121, 26));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 50, 71, 31));
        label_back = new QLabel(Dialog);
        label_back->setObjectName(QString::fromUtf8("label_back"));
        label_back->setGeometry(QRect(0, 0, 390, 330));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(270, 120, 71, 21));
        lineEdit_name = new QLineEdit(Dialog);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(260, 149, 121, 26));
        pushButton_sendFile = new QPushButton(Dialog);
        pushButton_sendFile->setObjectName(QString::fromUtf8("pushButton_sendFile"));
        pushButton_sendFile->setGeometry(QRect(290, 220, 71, 41));
        label_back->raise();
        textEdit->raise();
        comboBox->raise();
        lineEdit->raise();
        pushButton_close->raise();
        pushButton_send->raise();
        label->raise();
        lineEdit_IP->raise();
        label_2->raise();
        label_3->raise();
        lineEdit_name->raise();
        pushButton_sendFile->raise();

        retranslateUi(Dialog);
        QObject::connect(pushButton_close, SIGNAL(clicked()), Dialog, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "\346\230\245", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\244\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\247\213", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\206\254", 0, QApplication::UnicodeUTF8)
        );
        pushButton_close->setText(QApplication::translate("Dialog", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        pushButton_send->setText(QApplication::translate("Dialog", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\345\257\271\346\226\271\344\277\241\346\201\257</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "IP\345\234\260\345\235\200\357\274\232", 0, QApplication::UnicodeUTF8));
        label_back->setText(QString());
        label_3->setText(QApplication::translate("Dialog", "\345\220\215\345\255\227\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton_sendFile->setText(QApplication::translate("Dialog", "\345\217\221\351\200\201\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
