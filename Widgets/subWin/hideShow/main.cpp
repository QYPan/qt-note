#include <QtGui>
#include "win1.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	Win1 win1;
	win1.show();
	return app.exec();
}
