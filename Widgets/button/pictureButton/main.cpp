#include <QtGui>
#include "widget.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	MyWidget mw;
	mw.show();
	return app.exec();
}
