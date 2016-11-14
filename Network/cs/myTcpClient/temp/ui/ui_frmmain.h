/********************************************************************************
** Form generated from reading UI file 'frmmain.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMMAIN_H
#define UI_FRMMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmMain
{
public:
    QGroupBox *groupBox;
    QCheckBox *ckHexReceive;
    QLabel *label;
    QPushButton *btnConnect;
    QLineEdit *txtIP;
    QCheckBox *ckHexSend;
    QLineEdit *txtPort;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QTextEdit *txtReceive;
    QPushButton *btnSend;
    QLineEdit *txtSend;
    QPushButton *btnClear;

    void setupUi(QWidget *frmMain)
    {
        if (frmMain->objectName().isEmpty())
            frmMain->setObjectName(QString::fromUtf8("frmMain"));
        frmMain->resize(589, 529);
        frmMain->setStyleSheet(QString::fromUtf8(""));
        groupBox = new QGroupBox(frmMain);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 470, 571, 51));
        ckHexReceive = new QCheckBox(groupBox);
        ckHexReceive->setObjectName(QString::fromUtf8("ckHexReceive"));
        ckHexReceive->setGeometry(QRect(120, 10, 111, 31));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 10, 31, 31));
        btnConnect = new QPushButton(groupBox);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));
        btnConnect->setGeometry(QRect(480, 10, 81, 30));
        btnConnect->setCursor(QCursor(Qt::PointingHandCursor));
        txtIP = new QLineEdit(groupBox);
        txtIP->setObjectName(QString::fromUtf8("txtIP"));
        txtIP->setGeometry(QRect(260, 10, 111, 30));
        ckHexSend = new QCheckBox(groupBox);
        ckHexSend->setObjectName(QString::fromUtf8("ckHexSend"));
        ckHexSend->setGeometry(QRect(10, 10, 111, 31));
        txtPort = new QLineEdit(groupBox);
        txtPort->setObjectName(QString::fromUtf8("txtPort"));
        txtPort->setGeometry(QRect(420, 10, 51, 30));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 10, 31, 31));
        groupBox_2 = new QGroupBox(frmMain);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 571, 451));
        txtReceive = new QTextEdit(groupBox_2);
        txtReceive->setObjectName(QString::fromUtf8("txtReceive"));
        txtReceive->setGeometry(QRect(10, 10, 551, 391));
        txtReceive->setStyleSheet(QString::fromUtf8(""));
        txtReceive->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        btnSend = new QPushButton(groupBox_2);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        btnSend->setGeometry(QRect(380, 410, 91, 30));
        btnSend->setCursor(QCursor(Qt::PointingHandCursor));
        txtSend = new QLineEdit(groupBox_2);
        txtSend->setObjectName(QString::fromUtf8("txtSend"));
        txtSend->setGeometry(QRect(10, 410, 361, 30));
        btnClear = new QPushButton(groupBox_2);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setGeometry(QRect(480, 410, 81, 30));
        btnClear->setCursor(QCursor(Qt::PointingHandCursor));
        QWidget::setTabOrder(txtIP, txtPort);
        QWidget::setTabOrder(txtPort, btnConnect);
        QWidget::setTabOrder(btnConnect, btnClear);
        QWidget::setTabOrder(btnClear, ckHexSend);
        QWidget::setTabOrder(ckHexSend, ckHexReceive);
        QWidget::setTabOrder(ckHexReceive, txtSend);
        QWidget::setTabOrder(txtSend, btnSend);
        QWidget::setTabOrder(btnSend, txtReceive);

        retranslateUi(frmMain);

        QMetaObject::connectSlotsByName(frmMain);
    } // setupUi

    void retranslateUi(QWidget *frmMain)
    {
        frmMain->setWindowTitle(QApplication::translate("frmMain", "Tcp\351\200\232\344\277\241\345\256\242\346\210\267\347\253\257", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        ckHexReceive->setText(QApplication::translate("frmMain", "16\350\277\233\345\210\266\346\216\245\346\224\266", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("frmMain", "IP\357\274\232", 0, QApplication::UnicodeUTF8));
        btnConnect->setText(QApplication::translate("frmMain", "\350\277\236\346\216\245", 0, QApplication::UnicodeUTF8));
        txtIP->setText(QApplication::translate("frmMain", "192.168.1.187", 0, QApplication::UnicodeUTF8));
        ckHexSend->setText(QApplication::translate("frmMain", "16\350\277\233\345\210\266\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        txtPort->setText(QApplication::translate("frmMain", "60000", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("frmMain", "\347\253\257\345\217\243\357\274\232", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        btnSend->setText(QApplication::translate("frmMain", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        btnClear->setText(QApplication::translate("frmMain", "\346\270\205\347\251\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class frmMain: public Ui_frmMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMAIN_H
