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
#include <QListWidgetItem>
#include <QTextEdit>
#include <QtNetwork>
#include <QDebug>

frmMain::
frmMain(QWidget *parent)
: QWidget(parent)
{
	tcpClient = new QTcpSocket(this);
	tcpClient->abort(); // 取消原有连接
	connect(tcpClient, SIGNAL(readyRead()), this, SLOT(ReadData()));
	connect(tcpClient, SIGNAL(error(QAbstractSocket::SocketError)),
			this, SLOT(ReadError(QAbstractSocket::SocketError)));
	this->Init();
}

void frmMain::
Init(){
	resize(300, 500);
	clientList = new QListWidget;
	portLabel = new QLabel(tr("服务器端口："));
	portLabel2 = new QLabel(tr("本机端口："));
	portValue = new QSpinBox;
	portValue2 = new QSpinBox;
	portValue->setRange(1001, 65534);
	portValue->setValue(60000);
	portValue2->setRange(1001, 65534);
	portValue2->setValue(tcpClient->peerPort());
	portLabel->setBuddy(portValue);
	portLabel2->setBuddy(portValue2);
	ipLabel = new QLabel(tr("服务器 ip 地址："));
	ipAddress = new QLineEdit;
	ipLabel2 = new QLabel(tr("本机 ip 地址："));
	ipAddress2 = new QLineEdit;

	QString ip;
#if 1
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
#endif

	ipAddress2->setText(ip);

	QHBoxLayout *portLayout = new QHBoxLayout;
	portLayout->addWidget(portLabel);
	portLayout->addWidget(portValue);

	QHBoxLayout *portLayout2 = new QHBoxLayout;
	portLayout2->addWidget(portLabel2);
	portLayout2->addWidget(portValue2);

	QHBoxLayout *ipLayout = new QHBoxLayout;
	ipLayout->addWidget(ipLabel);
	ipLayout->addWidget(ipAddress);

	QHBoxLayout *ipLayout2 = new QHBoxLayout;
	ipLayout2->addWidget(ipLabel2);
	ipLayout2->addWidget(ipAddress2);

	connectButton = new QPushButton(tr("连接"));
	connect(connectButton, SIGNAL(clicked()), SLOT(ConnectButtonClicked()));
	connect(clientList, SIGNAL(itemDoubleClicked(QListWidgetItem *)),
			SLOT(changeToString(QListWidgetItem *)));
	connect(this, SIGNAL(itemHasClicked(QString)),
			this, SLOT(creatTalkWin(QString)));

	QVBoxLayout *mainLayout = new QVBoxLayout;
	mainLayout->addWidget(clientList);
	mainLayout->addLayout(ipLayout);
	mainLayout->addLayout(portLayout);
	mainLayout->addLayout(ipLayout2);
	mainLayout->addLayout(portLayout2);
	mainLayout->addWidget(connectButton);

	setLayout(mainLayout);
}

void frmMain::
creatTalkWin(QString address){
	ipMap[address] = new SubWin;
	ipMap[address]->setWindowTitle(address);
	connect(ipMap[address], SIGNAL(sendMessage(QString)),
			this, SLOT(sendButtonClicked(QString)));
	ipMap[address]->show();
	//ipMap[address] = 0;
}

void frmMain::
changeToString(QListWidgetItem *item){
	QString msg = item->text();
	emit itemHasClicked(msg);
}

void frmMain::
sendButtonClicked(QString msg){
	if(msg != ""){
		tcpClient->write(msg.toAscii());
	}
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
				ipMap.insert(std::pair<QString, SubWin *>(QString(token), 0));
			}
		}
		else if(*data == '-'){
			++data;
			QList<QListWidgetItem *> clientItems =
				clientList->findItems(QString(data), Qt::MatchStartsWith);
			clientList->takeItem(clientList->row(clientItems.first()));
			ipMap[clientItems.first()->text()]->close();
			ipMap.erase(clientItems.first()->text());
		}
		else if(*data == 'm'){
			++data;
			QString qData(data);
			QString address = qData.split("#")[0];
			QString msg = qData.split("#")[1];
			QString msgs(" he  > ");
			msgs += msg;
			if(ipMap[address] == 0){
				creatTalkWin(address);
				ipMap[address]->show();
				ipMap[address]->textReceive->append(msgs);
			}
			else{
				ipMap[address]->textReceive->append(msgs);
			}
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
			clientList->clear();
		}
	}
}
