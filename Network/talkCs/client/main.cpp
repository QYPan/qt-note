#include "frmmain.h"
#include "myhelper.h"
#include <QApplication>

int main(int argc, char *argv[]){
	QApplication app(argc, argv);

	myHelper::SetUTF8Code();
	frmMain fm;
	fm.show();

	return app.exec();
}

