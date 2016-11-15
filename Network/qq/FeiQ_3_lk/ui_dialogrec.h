/********************************************************************************
** Form generated from reading UI file 'dialogrec.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGREC_H
#define UI_DIALOGREC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogRec
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_path;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QLabel *label_map;

    void setupUi(QDialog *DialogRec)
    {
        if (DialogRec->objectName().isEmpty())
            DialogRec->setObjectName(QString::fromUtf8("DialogRec"));
        DialogRec->resize(210, 150);
        pushButton = new QPushButton(DialogRec);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 120, 41, 21));
        pushButton_2 = new QPushButton(DialogRec);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 120, 41, 21));
        label = new QLabel(DialogRec);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 181, 41));
        label_2 = new QLabel(DialogRec);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(7, 56, 61, 31));
        lineEdit = new QLineEdit(DialogRec);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(61, 57, 131, 27));
        lineEdit_path = new QLineEdit(DialogRec);
        lineEdit_path->setObjectName(QString::fromUtf8("lineEdit_path"));
        lineEdit_path->setGeometry(QRect(60, 88, 121, 27));
        pushButton_3 = new QPushButton(DialogRec);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(182, 89, 21, 21));
        label_3 = new QLabel(DialogRec);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 86, 61, 31));
        label_map = new QLabel(DialogRec);
        label_map->setObjectName(QString::fromUtf8("label_map"));
        label_map->setGeometry(QRect(0, 0, 210, 150));
        label_map->raise();
        pushButton->raise();
        pushButton_2->raise();
        label->raise();
        label_2->raise();
        lineEdit->raise();
        lineEdit_path->raise();
        pushButton_3->raise();
        label_3->raise();

        retranslateUi(DialogRec);
        QObject::connect(pushButton_2, SIGNAL(clicked()), DialogRec, SLOT(close()));
        QObject::connect(pushButton, SIGNAL(clicked()), DialogRec, SLOT(accept()));

        QMetaObject::connectSlotsByName(DialogRec);
    } // setupUi

    void retranslateUi(QDialog *DialogRec)
    {
        DialogRec->setWindowTitle(QApplication::translate("DialogRec", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DialogRec", "\346\230\257", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("DialogRec", "\345\220\246", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("DialogRec", "\346\226\207\344\273\266\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("DialogRec", "..", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DialogRec", "\346\226\207\344\273\266\350\267\257\345\276\204\357\274\232", 0, QApplication::UnicodeUTF8));
        label_map->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogRec: public Ui_DialogRec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGREC_H
