#ifndef SERVERS_1_H
#define SERVERS_1_H

#include <QWidget>
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

#include <QNetworkInterface>

namespace Ui {
    class Servers_1;
}

class Servers_1 : public QWidget
{
    Q_OBJECT

public:
    explicit Servers_1(QWidget *parent = 0);
    ~Servers_1();
    QTcpServer *tcpServer;
    void init();
    QString getIP();

    void uselist();

    void NAME(QTcpSocket* ,QByteArray);
    void list();


private slots:
    void on_pushButton_clicked();

    void newConnectSlot();
    void readMessage();
    void removeUserFormList();

    void on_pushButton_2_clicked();

private:
    Ui::Servers_1 *ui;
    QString ip;
    QList < QTcpSocket *> userList;
    QList <QByteArray> userName;
    QList <QString> userIP;
    QStringList ipname,ipss,namess;
    int ii;
    QString ips,names;
};

#endif // SERVERS_1_H
