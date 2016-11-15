/********************************************************************************
** Form generated from reading UI file 'servers_1.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERS_1_H
#define UI_SERVERS_1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Servers_1
{
public:
    QTextEdit *textEdit;
    QTextEdit *textEdit_IP;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *Servers_1)
    {
        if (Servers_1->objectName().isEmpty())
            Servers_1->setObjectName(QString::fromUtf8("Servers_1"));
        Servers_1->resize(250, 339);
        textEdit = new QTextEdit(Servers_1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 100, 211, 161));
        textEdit_IP = new QTextEdit(Servers_1);
        textEdit_IP->setObjectName(QString::fromUtf8("textEdit_IP"));
        textEdit_IP->setGeometry(QRect(110, 20, 121, 31));
        lineEdit = new QLineEdit(Servers_1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 290, 71, 27));
        pushButton = new QPushButton(Servers_1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 290, 61, 31));
        pushButton_2 = new QPushButton(Servers_1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(188, 64, 41, 27));
        label = new QLabel(Servers_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 290, 61, 31));
        label_2 = new QLabel(Servers_1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 91, 31));
        label_3 = new QLabel(Servers_1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 70, 81, 31));

        retranslateUi(Servers_1);

        QMetaObject::connectSlotsByName(Servers_1);
    } // setupUi

    void retranslateUi(QWidget *Servers_1)
    {
        Servers_1->setWindowTitle(QApplication::translate("Servers_1", "Servers_1", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Servers_1", "\345\274\200\345\220\257", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Servers_1", "\346\270\205\347\251\272", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Servers_1", "\347\253\257\345\217\243\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Servers_1", "\346\234\215\345\212\241\345\231\250IP\345\234\260\345\235\200\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Servers_1", "\350\277\236\346\216\245\346\203\205\345\206\265\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Servers_1: public Ui_Servers_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERS_1_H
