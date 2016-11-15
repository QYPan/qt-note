#include <QtGui>
#include <QtNetwork>
#include <QDebug>

int main()
{
	// 获取主机名
	QString localHostName = QHostInfo::localHostName();
	qDebug() << "localHostName: " << localHostName;

	// 获取主机里的 ip 地址
	QList<QHostAddress> ipAddressList = 
		QNetworkInterface::allAddresses();
	for(int i = 0; i < ipAddressList.size(); i++){
		if(ipAddressList.at(i) != QHostAddress::LocalHost &&
		   ipAddressList.at(i).toIPv4Address()){
			QString address = ipAddressList.at(i).toString();
			qDebug() << address << endl;
		}
	}
#if 0
	QHostInfo info = QHostInfo::fromName(localHostName);
	qDebug() << "IP Address: " << info.addresses();
	foreach(QHostAddress address, info.addresses()){
		if(address.protocol() == QAbstractSocket::IPv4Protocol)
			qDebug() << address.toString();
	}
#endif
}

