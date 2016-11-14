#include <QtGui>

class MyWidget : public QWidget{
	Q_OBJECT
public:
	MyWidget(QWidget *parent = 0);
protected:
	void resizeEvent(QResizeEvent *event);
private slots:
	void changeCircleCursor();
	void changeSquareCursor();
	void changeTriangCursor();
private:
	int updateButtonGeometry(QToolButton *button, int x, int y);
	QToolButton *createToolButton(const QIcon &icon, const char *member);
	QToolButton *circleButton;
	QToolButton *squareButton;
	QToolButton *triangButton;
	QCursor *circleCursor;
	QCursor *squareCursor;
	QCursor *triangCursor;
};
