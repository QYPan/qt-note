#ifndef FRMMAIN_H
#define FRMMAIN_H

#include <QWidget>
#include "addressMsg.h"
#include "mytcpserver.h"

class QListWidget;
class QPushButton;
class QLabel;
class QSpinBox;
class QLineEdit;
class QString;

class frmMain : public QWidget{
	Q_OBJECT
public:
	explicit frmMain(QWidget *parent = 0);
	void SendClientList(addressMsg msg, char flag);
	//~frmMain();
private slots:
	void ClientReadData(addressMsg msg, QByteArray data);
	void ClientConnect(addressMsg msg);
	void ClientDisConnect(addressMsg msg, int id);
	void ListenClicked();
private:
	QListWidget *clientLists;
	QPushButton *listenButton;
	QLabel *portLabel;
	QLabel *ipLabel;
	QLineEdit *ipAddress;
	QSpinBox *portValue;
	myTcpServer *server;
	void init();
	QString GetIpAddress();
};

#endif
