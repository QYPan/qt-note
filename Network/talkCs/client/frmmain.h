#ifndef FRAMMAIN_H
#define FRAMMAIN_H

#include <QWidget>
#include <QTcpSocket>

class QTcpSocket;
class QListWidget;
class QPushButton;
class QLabel;
class QSpinBox;
class QLineEdit;

class frmMain : public QWidget{
	Q_OBJECT
public:
	explicit frmMain(QWidget *parent = 0);
private slots:
	void ReadData();
	void ReadError(QAbstractSocket::SocketError);
	void ConnectButtonClicked();
private:
	QListWidget *clientList;
	QPushButton *connectButton;
	QLabel *ipLabel;
	QLineEdit *ipAddress;
	QLabel *portLabel, *portLabel2;
	QSpinBox *portValue, *portValue2;
	QTcpSocket *tcpClient;
	void Init();
};

#endif
