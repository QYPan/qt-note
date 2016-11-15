#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTcpSocket>
#include <QFile>
#include <QModelIndex>
#include <QNetworkInterface>
#include <QList>
#include <QDebug>
#include <QFileDialog>
#include <QUdpSocket>
#include <QFile>
#include <QMessageBox>

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    QString getIP();
    void chuanIP(QString , QString);
    void chuanMessage(QString);
    void chuanName(QString);
    void initSocket();
    void sendData();
    void send_();

private slots:
    void on_pushButton_send_clicked();
    void on_comboBox_currentIndexChanged(int index);
    void fs(const QString & );
    void readPendingDatagrams();
    void on_pushButton_sendFile_clicked();

private:
    Ui::Dialog *ui;
    QTcpSocket *tcpSocket;
    QString ip, ipRec, serverIP;
    QStringList tm;
    QPixmap map;
    QFileDialog *fDialog;
    QUdpSocket *udpSocket;
    QFile file;
    QString files;
};

#endif // DIALOG_H
