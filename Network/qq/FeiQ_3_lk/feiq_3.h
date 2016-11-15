#ifndef FEIQ_3_H
#define FEIQ_3_H

#include <QWidget>
#include <QTcpSocket>
#include <QNetworkInterface>
#include <QMessageBox>
#include <QLineEdit>
#include "dialog.h"
#include "dialogrec.h"

namespace Ui {
    class FeiQ_3;
}

class FeiQ_3 : public QWidget
{
    Q_OBJECT

public:
    explicit FeiQ_3(QWidget *parent = 0);
    ~FeiQ_3();
    void connectToServer(QString );
    QString getIP();

private slots:
    void connectedSlot();
    void readMessage();
    void on_pushButton_clicked();
    void on_pushButton_in_clicked();
    void on_pushButton_out_clicked();
    void acc();

    void on_listWidget_doubleClicked(const QModelIndex &index);

private:
    Ui::FeiQ_3 *ui;
    QTcpSocket *tcpSocket;
    QStringList sm,tm,rm,pps;
    QByteArray ipname;
    QString ip;
    Dialog *bbb;
    DialogRec *ccc;

    QPixmap map;
    QString rece_ip;
};

#endif // FEIQ_3_H
