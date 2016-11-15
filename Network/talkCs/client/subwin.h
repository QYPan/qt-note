#ifndef SUBWIN_H
#define SUBWIN_H

#include <QWidget>
#include <QDialog>
#include <QString>

class QTextEdit;
class QLineEdit;
class QPushButton;

class SubWin : public QDialog{
	Q_OBJECT
public:
	explicit SubWin(QWidget *parent = 0);
	QString getMessage() {return msg;}
	QPushButton *messageSendButton;
	QTextEdit *textReceive;
signals:
	void sendMessage(QString msg);
private slots:
	void sendButtonClicked();
private:
	QString msg;
	QLineEdit *messageEdit;
	void init();
};

#endif

