#ifndef MYHELPER_H
#define MYHELPER_H

#include <QTextCodec>

class myHelper : public QObject{
public:
	static void SetUTF8Code(){
		QTextCodec *codec = QTextCodec::codecForName("UTF-8");
		QTextCodec::setCodecForLocale(codec);
		QTextCodec::setCodecForCStrings(codec);
		QTextCodec::setCodecForTr(codec);
	}
};

#endif
