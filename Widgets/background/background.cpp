#include <QtGui>

class Background : public QWidget{
public:
	Background();
};

Background::
Background(){
	resize(400, 300);
	setBackgroundRole(QPalette::Light);
}

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	Background bg;
	bg.show();
	return app.exec();
}
