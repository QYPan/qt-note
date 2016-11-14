#include <QtGui>

class Win2;

class Win1 : public QWidget{
	Q_OBJECT
public:
	Win1(QWidget *parent = 0);
private slots:
	void creatWin();
private:
	QPushButton *button;
	Win2 *subWin;
};

class Win2 : public QWidget{
	Q_OBJECT
public:
	Win2(QWidget *parent = 0);
private slots:
	void backWin();
private:
	QPushButton *button;
};
