#include <QtGui>

enum SquareState {None, Box, Wall, Man, Target};
enum {BoardWidth = 20, BoardHeight = 20};

class Board : public QFrame{
	Q_OBJECT
public:
	Board(QWidget *parent = 0);
protected:
	void paintEvent(QPaintEvent *event);
	void keyPressEvent(QKeyEvent *event);
	void mousePressEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
private:
	void drawAt(const QPoint &pos);
	void drawSquare(QPainter &painter, int x, int y, SquareState);
	int squareHeight() {return contentsRect().height() / BoardHeight;}
	int squareWidth() {return contentsRect().width() / BoardWidth;}
	SquareState &stateAt(int y, int x) {return board[y][x];}
	SquareState board[BoardHeight][BoardWidth];
	QPoint manPosition;
};

