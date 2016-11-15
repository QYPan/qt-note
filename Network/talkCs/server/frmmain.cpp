#include "frmmain.h"
#include <QListWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>
#include <QtNetwork>
#include <string.h>
#include <QDebug>

frmMain::
frmMain(QWidget *parent)
: QWidget(parent)
{
	server = new myTcpServer(this);
	this->init();
	connect(server, SIGNAL(ClientConnect(addressMsg)),
			this, SLOT(ClientConnect(addressMsg)));
	connect(server, SIGNAL(ClientDisConnect(addressMsg, int)),
			this, SLOT(ClientDisConnect(addressMsg, int)));
	connect(server, SIGNAL(ClientReadData(addressMsg, QByteArray)),
			this, SLOT(ClientReadData(addressMsg, QByteArray)));
	connect(listenButton, SIGNAL(clicked()),
			this, SLOT(ListenClicked()));
}

void frmMain::
init(){
	resize(300, 500);
	clientLists = new QListWidget;
	ipLabel = new QLabel(tr("ip 地址："));
	ipAddress = new QLineEdit;
	ipAddress->setText(GetIpAddress());
	ipLabel->setBuddy(ipAddress);
	portLabel = new QLabel(tr("端口："));
	portValue = new QSpinBox;
	portValue->setRange(1001, 65534);
	portValue->setValue(60000);
	portLabel->setBuddy(portValue);

	QHBoxLayout *portLayout = new QHBoxLayout;
	portLayout->addWidget(portLabel);
	portLayout->addWidget(portValue);

	QHBoxLayout *ipLayout = new QHBoxLayout;
	ipLayout->addWidget(ipLabel);
	ipLayout->addWidget(ipAddress);

	listenButton = new QPushButton(tr("监听"));

	QVBoxLayout *mainLayout = new QVBoxLayout;
	mainLayout->addWidget(clientLists);
	mainLayout->addLayout(ipLayout);
	mainLayout->addLayout(portLayout);
	mainLayout->addWidget(listenButton);

	setLayout(mainLayout);
}

QString frmMain::
GetIpAddress(){
	QString ip;
	QList<QHostAddress> ipAddressList = 
		QNetworkInterface::allAddresses();
	for(int i = 0; i < ipAddressList.size(); i++){
		if(ipAddressList.at(i) != QHostAddress::LocalHost &&
		   ipAddressList.at(i).toIPv4Address()){
			ip = ipAddressList.at(i).toString();
			break;
		}
	}
	if(ip.isEmpty())
		ip = QHostAddress(QHostAddress::LocalHost).toString();
	return ip;
}

void frmMain::
ClientReadData(addressMsg msg, QByteArray data){
	char *buffer = data.data();
	if(*buffer == 'm'){
		++buffer;
		int len = strchr(buffer, '#') - buffer;
		char ip[40];
		strncpy(ip, buffer, len);
		QString address(ip);
		addressMsg newMsg;
		newMsg.clientID = address.split(":")[0].toInt();
		newMsg.IP = address.split(":")[1];
		newMsg.Port = address.split(":")[2].toInt();
		QString newData = "m" + tr("%1:%2:%3#").arg(msg.clientID)
			                                  .arg(msg.IP).arg(msg.Port)
											  + QString(buffer+len+1);
		server->SendData(newMsg, newData.toAscii());
		//qDebug() << newMsg.clientID;
		//qDebug() << newMsg.IP;
		//qDebug() << newMsg.Port;
		//qDebug() << newData;
	}
	//qDebug() << data;
}

void frmMain::
SendClientList(addressMsg msg, char flag){
	QString data;
	for(int i = 0; i < server->ClientSocketList.size(); ++i){
		myClientSocket *ms = server->ClientSocketList[i];
		addressMsg tmsg;
		tmsg.clientID = ms->GetClientID();
		tmsg.IP = ms->peerAddress().toString();
		tmsg.Port = ms->peerPort();
		if(flag == '-' || msg.clientID != tmsg.clientID){
			QString sub = tr("%1%2:%3:%4").arg(flag).arg(msg.clientID).arg(msg.IP)
										  .arg(msg.Port);
			server->SendData(tmsg, sub.toAscii());
		}
		if(flag == '+') data += tr("%1%2:%3:%4").arg(flag).arg(tmsg.clientID).arg(tmsg.IP)
							    .arg(tmsg.Port);
	}
	if(flag == '+')
		server->SendData(msg, data.toAscii());
}

void frmMain::
ClientConnect(addressMsg msg){
	QString data = tr("id:%1 ip:%2 port:%3")
			       .arg(msg.clientID).arg(msg.IP).arg(msg.Port);
	clientLists->addItem(data);
	SendClientList(msg, '+'); 
	//server->SendData(msg, data.toAscii());
}

void frmMain::
ClientDisConnect(addressMsg msg, int id){
	SendClientList(msg, '-'); 
	clientLists->takeItem(id);
}

void frmMain::
ListenClicked(){
	if(listenButton->text() == "监听"){
		bool ok = server->listen(QHostAddress::Any,
				                 portValue->text().toInt());
		if(ok){
			listenButton->setText(tr("停止"));
		}
	}
	else{
		server->close();
		listenButton->setText(tr("监听"));
	}
}
