#include <QtGui>
#include "ui_des.h"

int main(int argc, char *argv[]){
	QApplication app(argc, argv);
	Ui::GoToCellDialog ui;
	QDialog *dialog = new QDialog;
	ui.setupUi(dialog);
	dialog->show();
	return app.exec();
}
