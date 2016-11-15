#ifndef DIALOGREC_H
#define DIALOGREC_H

#include <QDialog>
#include <QFileDialog>

#include <QUdpSocket>
#include <QFile>
#include "dialog.h"

namespace Ui {
    class DialogRec;
}

class DialogRec : public QDialog
{
    Q_OBJECT

public:
    explicit DialogRec(QWidget *parent = 0);
    ~DialogRec();
    void fileName(QString , QString);
    void initSocket();

private slots:

    void fs(const QString & );
    void readPendingDatagrams();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::DialogRec *ui;
    QString file_name;
    QUdpSocket *udpSocket;
    QFile file;
    QFileDialog *fDialog;
    QString filee;
    Dialog *bbb;
};

#endif // DIALOGREC_H
