#ifndef MYCLIENTSOCKET_H
#define MYCLIENTSOCKET_H

#include <QTcpSocket>
#include "addressMsg.h"

class myClientSocket : public QTcpSocket{
	Q_OBJECT
public:
	explicit myClientSocket(QObject *parent = 0, int clientID = 0);
	int GetClientID() {return clientID;}
private:
	int clientID;
signals:
	void ClientReadData(addressMsg msg, QByteArray);
	void ClientDisConnect(addressMsg msg);
private slots:
	void ReadData();
	void DisConnect();
};

#endif
