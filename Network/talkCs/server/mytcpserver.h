#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QTcpServer>
#include "myclientsocket.h"
#include "addressMsg.h"

class myTcpServer : public QTcpServer{
	Q_OBJECT
public:
	explicit myTcpServer(QObject *parent = 0);
	void SendData(addressMsg msg, QByteArray data);
	QList<myClientSocket *> ClientSocketList;
//private:
	//QList<int> ClientSocketID;
protected:
	void incomingConnection(int handle);
signals:
	void ClientReadData(addressMsg msg, QByteArray data);
	void ClientConnect(addressMsg msg);
	void ClientDisConnect(addressMsg msg, int id);
private slots:
	void ReadData(addressMsg msg, QByteArray data);
	void DisConnect(addressMsg msg);
};

#endif
