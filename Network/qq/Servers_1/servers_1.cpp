#include "servers_1.h"
#include "ui_servers_1.h"

Servers_1::Servers_1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Servers_1)
{
    ui->setupUi(this);
    ip = getIP();
    ui->textEdit_IP->append(ip);
    ui->textEdit_IP->setReadOnly(true);
    ui->lineEdit->setText("8000");
    tcpServer = new QTcpServer(this);
    connect(tcpServer,SIGNAL(newConnection()),this,SLOT(newConnectSlot()));
}

Servers_1::~Servers_1()
{
    delete ui;
}

void Servers_1::init()
{
    QString dk = ui->lineEdit->text();
    bool ok;
    int i = dk.toInt(&ok, 10);
    if(tcpServer->listen(QHostAddress::Any, i)){
        ui->textEdit->append("listen OK!");
    }else{
        ui->textEdit->append("listen error!");
    }
}

void Servers_1::newConnectSlot()
{
    QString tmp;
    QTcpSocket *tcp = tcpServer->nextPendingConnection();
    connect(tcp,SIGNAL(readyRead()),this,SLOT(readMessage()));
    userList << tcp;

    tmp.append(tcp->peerAddress().toString());
    tmp.append("上线了！");
    ui->textEdit->append(tmp);

    connect(tcp,SIGNAL(disconnected()),this,SLOT(removeUserFormList()));
}


//等待用户消息；
void Servers_1::readMessage()
{
    QByteArray tmp;
    QString bb;
    QTcpSocket *socket = static_cast<QTcpSocket*>(sender());
    //qDebug() << socket->readAll();
    tmp.append(socket->readAll());

    if(tmp[0] == '%'){

        QString tmptmp(tmp);
        ipname = tmptmp.split("%");

        ips.append(ipname.at(1));
        ips.append("^");
        names.append(ipname.at(2));
        names.append("^");

        ipss = ips.split("^");
        namess = names.split("^");

        list();



    }else{
        for(int i = 0; i < userList.count(); i++)
        {
                 userList.at(i)->write(tmp);
        }
    }
}

QString Servers_1::getIP()  //获取ip地址
{
    QList<QHostAddress> list = QNetworkInterface::allAddresses();
    foreach (QHostAddress address, list){
       if(address.protocol() == QAbstractSocket::IPv4Protocol){
           if (address.toString().contains("127.0.")){
               continue;
           }
           return address.toString();
       }
    }
    return 0;
}

void Servers_1::on_pushButton_clicked()  //开启服务器；
{
    init();
}

void Servers_1::removeUserFormList()
{
    QString tmp;

    QTcpSocket* socket = static_cast<QTcpSocket*>(sender());
//    QTcpSocket *tcp = tcpServer->nextPendingConnection();

    socket->peerAddress().toString();

    if(userList.removeOne(socket)){
        tmp.append(socket->peerAddress().toString());
        tmp.append("下线了！");
        ui->textEdit->append(tmp);
        list();
    }
}

void Servers_1::on_pushButton_2_clicked()
{
    ui->textEdit->clear();
}

void Servers_1::list()
{
    QByteArray msg;
    QString aa;
    for(int i = 0; i < userList.count() && userList.at(i)->peerAddress().toString() != aa; i++){
        msg.append( userList.at(i)->peerAddress().toString());
         for(int k = 0; k <ipss.count(); k++){
             if( userList.at(i)->peerAddress().toString()== ipss.at(k)){
                 msg.append("\n");
                 msg.append(namess.at(k));
                 break;
             }
         }
        msg.append("   @");
        aa =  userList.at(i)->peerAddress().toString();
    }
    for(int j = 0; j <userList.count(); j++){
        userList.at(j)->write(msg);
    }
    msg.clear();
}

