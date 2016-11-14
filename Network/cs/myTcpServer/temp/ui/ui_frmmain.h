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
#include <QtGui/QComboBox>
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
    QLineEdit *txtPort;
    QPushButton *btnListen;
    QLabel *label_2;
    QCheckBox *ckHexSend;
    QCheckBox *ckHexReceive;
    QGroupBox *groupBox_2;
    QLabel *label;
    QTextEdit *txtReceive;
    QPushButton *btnSend;
    QLineEdit *txtSend;
    QComboBox *cboxClient;
    QPushButton *btnClear;

    void setupUi(QWidget *frmMain)
    {
        if (frmMain->objectName().isEmpty())
            frmMain->setObjectName(QString::fromUtf8("frmMain"));
        frmMain->resize(511, 496);
        groupBox = new QGroupBox(frmMain);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 440, 491, 49));
        txtPort = new QLineEdit(groupBox);
        txtPort->setObjectName(QString::fromUtf8("txtPort"));
        txtPort->setGeometry(QRect(290, 10, 61, 30));
        btnListen = new QPushButton(groupBox);
        btnListen->setObjectName(QString::fromUtf8("btnListen"));
        btnListen->setGeometry(QRect(360, 10, 121, 30));
        btnListen->setCursor(QCursor(Qt::PointingHandCursor));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 10, 61, 31));
        ckHexSend = new QCheckBox(groupBox);
        ckHexSend->setObjectName(QString::fromUtf8("ckHexSend"));
        ckHexSend->setGeometry(QRect(10, 10, 111, 31));
        ckHexReceive = new QCheckBox(groupBox);
        ckHexReceive->setObjectName(QString::fromUtf8("ckHexReceive"));
        ckHexReceive->setGeometry(QRect(120, 10, 111, 31));
        groupBox_2 = new QGroupBox(frmMain);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 491, 425));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 350, 91, 31));
        txtReceive = new QTextEdit(groupBox_2);
        txtReceive->setObjectName(QString::fromUtf8("txtReceive"));
        txtReceive->setGeometry(QRect(10, 10, 471, 331));
        txtReceive->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        btnSend = new QPushButton(groupBox_2);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        btnSend->setGeometry(QRect(360, 384, 121, 30));
        btnSend->setCursor(QCursor(Qt::PointingHandCursor));
        txtSend = new QLineEdit(groupBox_2);
        txtSend->setObjectName(QString::fromUtf8("txtSend"));
        txtSend->setGeometry(QRect(10, 384, 341, 30));
        cboxClient = new QComboBox(groupBox_2);
        cboxClient->setObjectName(QString::fromUtf8("cboxClient"));
        cboxClient->setGeometry(QRect(110, 350, 241, 25));
        btnClear = new QPushButton(groupBox_2);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setGeometry(QRect(360, 350, 121, 30));
        btnClear->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(frmMain);

        QMetaObject::connectSlotsByName(frmMain);
    } // setupUi

    void retranslateUi(QWidget *frmMain)
    {
        frmMain->setWindowTitle(QApplication::translate("frmMain", "Tcp\351\200\232\344\277\241\346\234\215\345\212\241\345\231\250\347\253\257", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        txtPort->setText(QApplication::translate("frmMain", "60000", 0, QApplication::UnicodeUTF8));
        btnListen->setText(QApplication::translate("frmMain", "\347\233\221\345\220\254", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("frmMain", "\347\253\257  \345\217\243\357\274\232", 0, QApplication::UnicodeUTF8));
        ckHexSend->setText(QApplication::translate("frmMain", "\345\215\201\345\205\255\350\277\233\345\210\266\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        ckHexReceive->setText(QApplication::translate("frmMain", "\345\215\201\345\205\255\350\277\233\345\210\266\346\216\245\346\224\266", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        label->setText(QApplication::translate("frmMain", "\345\267\262\350\277\236\346\216\245\345\256\242\346\210\267\347\253\257\357\274\232", 0, QApplication::UnicodeUTF8));
        btnSend->setText(QApplication::translate("frmMain", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        btnClear->setText(QApplication::translate("frmMain", "\346\270\205\347\251\272\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class frmMain: public Ui_frmMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMAIN_H
