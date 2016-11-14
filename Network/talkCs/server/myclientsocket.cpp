#include "myclientsocket.h"
#include <QHostAddress>
#include <QDebug>

myClientSocket::
myClientSocket(QObject *parent, int clientID)
: QTcpSocket(parent)
{
	this->clientID = clientID;
	connect(this, SIGNAL(readyRead()), this, SLOT(ReadData()));
	connect(this, SIGNAL(disconnected()), this, SLOT(DisConnect()));
	connect(this, SIGNAL(disconnected()), this, SLOT(deleteLater()));
}

void myClientSocket::
ReadData(){
	QByteArray data = this->readAll();
	addressMsg msg(this->clientID, this->peerAddress().toString(),
			       this->peerPort());
	emit ClientReadData(msg, data);
}

void myClientSocket::
DisConnect(){
	addressMsg msg(this->clientID, this->peerAddress().toString(),
			       this->peerPort());
	emit ClientDisConnect(msg);
}

