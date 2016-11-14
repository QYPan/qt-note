#include <QtGui>
#include "win1.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	Win1 win;
	win.show();
   	return app.exec();
}
