#include <QtGui>

class MyWidget : public QWidget{
	Q_OBJECT
public:
	MyWidget(QWidget *parent = 0);
private slots:
	void openMessageBox(QListWidgetItem *item);
private:
	QListWidget *listWidget;
};
