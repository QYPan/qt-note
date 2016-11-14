#include "mytcpserver.h"
#include <QHostAddress>
#include <QDebug>

myTcpServer::
myTcpServer(QObject *parent)
: QTcpServer(parent)
{
}

void myTcpServer::
incomingConnection(int handle){
	myClientSocket *client = new myClientSocket(this, handle);
	client->setSocketDescriptor(handle);

	connect(client, SIGNAL(ClientReadData(addressMsg, QByteArray)),
			this, SLOT(ReadData(addressMsg, QByteArray)));
	connect(client, SIGNAL(ClientDisConnect(addressMsg)),
			this, SLOT(DisConnect(addressMsg)));

	ClientSocketList.append(client);

	emit ClientConnect(addressMsg(handle, client->peerAddress().toString(),
				client->peerPort()));

	//ClientSocketID.append(handle);
}

void myTcpServer::
ReadData(addressMsg msg, QByteArray data){
	emit ClientReadData(msg, data);
}

void myTcpServer::
DisConnect(addressMsg msg){
	for(int i = 0; i < ClientSocketList.count(); i++){
		if(ClientSocketList[i]->GetClientID() == msg.clientID){
			ClientSocketList.removeAt(i);
			emit ClientDisConnect(msg, i);
			break;
		}
	}
}

void myTcpServer::
SendData(addressMsg msg, QByteArray data){
	for(int i = 0; i < ClientSocketList.count(); i++){
		if(ClientSocketList[i]->GetClientID() == msg.clientID){
			ClientSocketList[i]->write(data);
			break;
		}
	}
}
