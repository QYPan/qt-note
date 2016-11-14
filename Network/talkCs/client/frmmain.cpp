#include "frmmain.h"
#include <string.h>
#include <QListWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QSpinBox>
#include <QHostAddress>
#include <QLineEdit>
#include <QMessageBox>
#include <QtNetwork>

frmMain::
frmMain(QWidget *parent)
: QWidget(parent)
{
	this->Init();
	tcpClient = new QTcpSocket(this);
	tcpClient->abort(); // 取消原有连接
	connect(tcpClient, SIGNAL(readyRead()), this, SLOT(ReadData()));
	connect(tcpClient, SIGNAL(error(QAbstractSocket::SocketError)),
			this, SLOT(ReadError(QAbstractSocket::SocketError)));
}

void frmMain::
Init(){
	resize(300, 500);
	clientList = new QListWidget;
	portLabel = new QLabel(tr("端口："));
	portValue = new QSpinBox;
	portValue->setRange(1001, 65534);
	portValue->setValue(60000);
	portLabel->setBuddy(portValue);
	ipLabel = new QLabel(tr("ip 地址："));
	ipAddress = new QLineEdit;

	QString ip;
	QList<QHostAddress> ipAddressList = QNetworkInterface::allAddresses();
	for(int i = 0; i < ipAddressList.size(); ++i){
		if(ipAddressList.at(i) != QHostAddress::LocalHost &&
		   ipAddressList.at(i).toIPv4Address()){
			ip = ipAddressList.at(i).toString();
			break;
		}
	}
	if(ip.isEmpty())
		ip = QHostAddress(QHostAddress::LocalHost).toString();

	ipAddress->setText(ip);

	QHBoxLayout *portLayout = new QHBoxLayout;
	portLayout->addWidget(portLabel);
	portLayout->addWidget(portValue);

	QHBoxLayout *ipLayout = new QHBoxLayout;
	ipLayout->addWidget(ipLabel);
	ipLayout->addWidget(ipAddress);

	connectButton = new QPushButton(tr("连接"));
	connect(connectButton, SIGNAL(clicked()), SLOT(ConnectButtonClicked()));

	QVBoxLayout *mainLayout = new QVBoxLayout;
	mainLayout->addWidget(clientList);
	mainLayout->addLayout(ipLayout);
	mainLayout->addLayout(portLayout);
	mainLayout->addWidget(connectButton);

	setLayout(mainLayout);
}

void frmMain::
ReadData(){
	QByteArray buffer = tcpClient->readAll();
	if(!buffer.isEmpty()){
		char *data = buffer.data();
		if(*data == '+'){
			++data;
			char *token;
			for(token = strtok(data, "+"); token != NULL;
				token = strtok(NULL, "+")){
				clientList->addItem(QString(token));
			}
		}
		else if(*data == '-'){
			++data;
			QList<QListWidgetItem *> clientItems =
				clientList->findItems(QString(data), Qt::MatchStartsWith);
			clientList->takeItem(clientList->row(clientItems.first()));
		}
	}
}

void frmMain::
ReadError(QAbstractSocket::SocketError){
	tcpClient->disconnectFromHost();
	connectButton->setText("连接");
	QMessageBox msg;
	msg.setText(tr("连接服务器失败，原因：%1")
				.arg(tcpClient->errorString()));
	msg.exec();
}

void frmMain::
ConnectButtonClicked(){
	if(connectButton->text() == "连接"){
		tcpClient->connectToHost(ipAddress->text(),
				                 portValue->text().toInt());
		if(tcpClient->waitForConnected(1000)){
			connectButton->setText("断开");
		}
	}
	else{
		tcpClient->disconnectFromHost();
		tcpClient->waitForDisconnected(1000);
		if(tcpClient->state() == QAbstractSocket::UnconnectedState ||
		   tcpClient->waitForDisconnected(1000)){
			connectButton->setText("连接");
		}
	}
}
