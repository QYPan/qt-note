#include "subwin.h"
#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>

SubWin::
SubWin(QWidget *parent)
: QDialog(parent)
{
	this->init();
}

void SubWin::
init(){
	resize(500, 400);
	textReceive = new QTextEdit;
	textReceive->setReadOnly(true);
	QLabel *messageLabel = new QLabel(tr("消息："));
	messageEdit = new QLineEdit;
	messageLabel->setBuddy(messageEdit);
	messageSendButton = new QPushButton(tr("发送"));
	QHBoxLayout *msgLayout = new QHBoxLayout;
	msgLayout->addWidget(messageLabel);
	msgLayout->addWidget(messageEdit);
	msgLayout->addWidget(messageSendButton);
	QVBoxLayout *mainLayout = new QVBoxLayout;
	mainLayout->addWidget(textReceive);
	mainLayout->addLayout(msgLayout);
	setLayout(mainLayout);

	connect(messageSendButton, SIGNAL(clicked()),
			this, SLOT(sendButtonClicked()));
}

void SubWin::
sendButtonClicked(){
	msg = messageEdit->text();
	if(msg != ""){
		QString msgs("you > ");
		msgs += msg;
		textReceive->append(msgs);
		messageEdit->clear();
		QString newMsg = "m" + windowTitle() + "#" + msg;
		emit sendMessage(newMsg);
	}
}
