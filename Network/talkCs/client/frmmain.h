#ifndef FRAMMAIN_H
#define FRAMMAIN_H

#include "subwin.h"
#include <QWidget>
#include <QTcpSocket>
#include <map>

class QTcpSocket;
class QListWidgetItem;
class QListWidget;
class QPushButton;
class QLabel;
class QSpinBox;
class QLineEdit;

class frmMain : public QWidget{
	Q_OBJECT
public:
	explicit frmMain(QWidget *parent = 0);
signals:
	void itemHasClicked(QString msg);
private slots:
	void ReadData();
	void ReadError(QAbstractSocket::SocketError);
	void ConnectButtonClicked();
	void creatTalkWin(QString msg);
	void changeToString(QListWidgetItem *item);
	void sendButtonClicked(QString msg);
private:
	SubWin *talkWin;
	QListWidget *clientList;
	QPushButton *connectButton;
	QLabel *ipLabel, *ipLabel2;
	QLineEdit *ipAddress, *ipAddress2;
	QLabel *portLabel, *portLabel2;
	QSpinBox *portValue, *portValue2;
	QTcpSocket *tcpClient;
	QString curAddress;
	std::map<QString, SubWin *> ipMap;
	void Init();
};

#endif
