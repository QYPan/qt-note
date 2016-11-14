#ifndef ADDRESSMSG_H
#define ADDRESSMSG_H

#include <QString>

struct addressMsg{
	int clientID;
	QString IP;
	int Port;
	addressMsg(int cln = 0, QString ip = "", int p = 0)
	: clientID(cln), IP(ip), Port(p)
	{
	}
};

#endif
